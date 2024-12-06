#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 8080

void openImage(int textId) {
    char command[256];

    switch (textId) {
        case 0:
            snprintf(command, sizeof(command), "feh /home/pi/Mega_Order/image/0.png");
            break;
        case 1:
            snprintf(command, sizeof(command), "feh /home/pi/Mega_Order/image/1.png");
            break;
        case 2:
            snprintf(command, sizeof(command), "feh /home/pi/Mega_Order/image/2.png");
            break;
        default:
            printf("No image for textId: %d\n", textId);
            return;
    }

    printf("Executing command: %s\n", command);

    system(command);
}

int main() {
    int server_fd, new_socket;
    struct sockaddr_in address;
    int addrlen = sizeof(address);
    char buffer[1024] = {0};
    char *line;

    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (server_fd == 0) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
        perror("Bind failed");
        close(server_fd);
        exit(EXIT_FAILURE);
    }

    if (listen(server_fd, 3) < 0) {
        perror("Listen failed");
        close(server_fd);
        exit(EXIT_FAILURE);
    }
    printf("Server listening on port %d...\n", PORT);

    while (1) {
        new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t *)&addrlen);
        if (new_socket < 0) {
            perror("Accept failed");
            continue;
        }
        printf("New connection accepted\n");

        while (1) {
            int valread = read(new_socket, buffer, sizeof(buffer) - 1);
            if (valread <= 0) break; 
            buffer[valread] = '\0';

            printf("%s", buffer);

            line = strtok(buffer, "\n");
            while (line != NULL) {
                int textId;
                if (sscanf(line, "제품번호 : %d", &textId) == 1) {
                    openImage(textId);
                }
                line = strtok(NULL, "\n");
            }
        }

        close(new_socket);
        printf("Connection closed\n");
    }

    close(server_fd);
    return 0;
}
