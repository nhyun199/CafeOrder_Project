#include "tcp_echo_server.h"
#include "lwip/sockets.h"
#include "lwip/netdb.h"
#include "lwip/err.h"
#include <string.h>

#define TCP_PORT 5000
#define BUFFER_SIZE 128

void tcp_echo_server(void) {
    struct sockaddr_in server_addr, client_addr;
    int server_sock, client_sock;
    socklen_t client_addr_len = sizeof(client_addr);
    char buffer[BUFFER_SIZE];
    int recv_len;

    // 1. 소켓 생성
    server_sock = socket(AF_INET, SOCK_STREAM, 0);
    if (server_sock < 0) {
        printf("Socket creation failed!\n");
        return;
    }

    // 2. 서버 주소 설정
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(TCP_PORT);
    server_addr.sin_addr.s_addr = htonl(INADDR_ANY);

    // 3. 바인딩
    if (bind(server_sock, (struct sockaddr*)&server_addr, sizeof(server_addr)) < 0) {
        printf("Bind failed!\n");
        closesocket(server_sock);
        return;
    }

    // 4. 연결 대기
    if (listen(server_sock, 5) < 0) {
        printf("Listen failed!\n");
        closesocket(server_sock);
        return;
    }

    printf("TCP Echo Server started on port %d...\n", TCP_PORT);

    while (1) {
        // 5. 클라이언트 연결 대기
        client_sock = accept(server_sock, (struct sockaddr*)&client_addr, &client_addr_len);
        if (client_sock < 0) {
            printf("Accept failed!\n");
            continue;
        }

        printf("Client connected!\n");

        // 6. 데이터 송수신
        while ((recv_len = recv(client_sock, buffer, BUFFER_SIZE, 0)) > 0) {
            buffer[recv_len] = '\0'; // 수신된 데이터 처리
            printf("Received: %s\n", buffer);

            // Echo 데이터 전송
            send(client_sock, buffer, recv_len, 0);
        }

        printf("Client disconnected!\n");
        closesocket(client_sock);
    }

    closesocket(server_sock);
}
