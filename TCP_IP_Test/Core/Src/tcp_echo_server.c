
/**
  ******************************************************************************
  * @file           : tcp_echo_server.c
  * @brief          : TCP echo server body
  ******************************************************************************

  ******************************************************************************
  */
#include "tcp_echo_server.h"
#include "string.h"
#include "stdio.h"

#define TCP_PORT 5000
#define BUFFER_SIZE 128

void tcp_echo_server(void) {
    struct sockaddr_in server_addr, client_addr;
    int server_sock, client_sock;
    socklen_t client_addr_len = sizeof(client_addr);
    char buffer[BUFFER_SIZE];
    int recv_len;

    char ipAddrStr[16];
    if (gnetif.ip_addr.addr == 0) {
        snprintf(ipAddrStr, sizeof(ipAddrStr), "IP not set");
    } else {
        snprintf(ipAddrStr, sizeof(ipAddrStr), "%s", ip4addr_ntoa(netif_ip4_addr(&gnetif)));
    }
    printf("Server IP Address: %s\r\n", ipAddrStr);

    server_sock = socket(AF_INET, SOCK_STREAM, 0);
    if (server_sock < 0) {
        printf("Socket creation failed!\n");
        return;
    }

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(TCP_PORT);
    server_addr.sin_addr.s_addr = htonl(INADDR_ANY);

    if (bind(server_sock, (struct sockaddr*)&server_addr, sizeof(server_addr)) < 0) {
        printf("Bind failed!\n");
        closesocket(server_sock);
        return;
    }

    if (listen(server_sock, 5) < 0) {
        printf("Listen failed!\n");
        closesocket(server_sock);
        return;
    }

    printf("TCP Echo Server started on port %d...\r\n", TCP_PORT);

    while (1) {
        client_sock = accept(server_sock, (struct sockaddr*)&client_addr, &client_addr_len);
        if (client_sock < 0) {
            printf("Accept failed!\n");
            continue;
        }

        printf("Client connected!\r\n");


        while ((recv_len = recv(client_sock, buffer, BUFFER_SIZE, 0)) > 0) {
            buffer[recv_len] = '\0';
            printf("Received: %s\r\n", buffer);

            send(client_sock, buffer, recv_len, 0);
        }

        printf("Client disconnected!\r\n");
        closesocket(client_sock);
    }

    closesocket(server_sock);
}
