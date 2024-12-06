#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <time.h>

#define PORT 8080

void writeOrderInfo(const char *message, int isFirstLine) 
{
    FILE *file = fopen("/home/pi/Mega_Order/orders.txt", "a");
    if (file == NULL) {
        perror("File open failed");
        return;
    }

    if (isFirstLine) {
        time_t now = time(NULL);
        if (now == -1) {
            perror("time() failed");
            fclose(file);
            return;
        }

        struct tm *local = localtime(&now);
        if (local == NULL) {
            perror("localtime() failed");
            fclose(file);
            return;
        }

        char timeStr[64];
        if (strftime(timeStr, sizeof(timeStr), "%Y-%m-%d %H:%M:%S", local) == 0) {
            fprintf(stderr, "strftime() failed to format time\n");
            fclose(file);
            return;
        }

        // 시간 기록
        fprintf(file, "------ 주문 일시 : [%s]\n", timeStr);
        printf("------ 주문 일시 : [%s]\n", timeStr);
    }

    // 메시지 기록
    fprintf(file, "%s\n\n", message);
    fclose(file);
}


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
        case 3:
            snprintf(command, sizeof(command), "feh /home/pi/Mega_Order/image/3.png");
            break;
        case 4:
            snprintf(command, sizeof(command), "feh /home/pi/Mega_Order/image/4.png");
            break;
        case 5:
            snprintf(command, sizeof(command), "feh /home/pi/Mega_Order/image/5.png");
            break;
        case 6:
            snprintf(command, sizeof(command), "feh /home/pi/Mega_Order/image/6.png");
            break;
        case 7:
            snprintf(command, sizeof(command), "feh /home/pi/Mega_Order/image/7.png");
            break;
        case 8:
            snprintf(command, sizeof(command), "feh /home/pi/Mega_Order/image/8.png");
            break;
        case 9:
            snprintf(command, sizeof(command), "feh /home/pi/Mega_Order/image/9.png");
            break;
        case 10:
            snprintf(command, sizeof(command), "feh /home/pi/Mega_Order/image/10.png");
            break;
        case 11:
            snprintf(command, sizeof(command), "feh /home/pi/Mega_Order/image/11.png");
            break;
        case 12:
            snprintf(command, sizeof(command), "feh /home/pi/Mega_Order/image/12.png");
            break;
        case 13:
            snprintf(command, sizeof(command), "feh /home/pi/Mega_Order/image/13.png");
            break;
        case 14:
            snprintf(command, sizeof(command), "feh /home/pi/Mega_Order/image/14.png");
            break;
        case 15:
            snprintf(command, sizeof(command), "feh /home/pi/Mega_Order/image/15.png");
            break;
        case 16:
            snprintf(command, sizeof(command), "feh /home/pi/Mega_Order/image/16.png");
            break;
        case 17:
            snprintf(command, sizeof(command), "feh /home/pi/Mega_Order/image/17.png");
            break;
        case 18:
            snprintf(command, sizeof(command), "feh /home/pi/Mega_Order/image/18.png");
            break;    
        default:
            printf("No image for textId: %d\n", textId);
            return;
    }

    //printf("Executing command: %s\n", command);

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
        //printf("New connection accepted\n");

        int isFirstLine = 1; // 첫 번째 메시지 여부 플래그

        while (1) {
            int valread = read(new_socket, buffer, sizeof(buffer) - 1);
            if (valread <= 0) break;
            buffer[valread] = '\0';

            printf("%s", buffer);

            line = strtok(buffer, "\n");
            while (line != NULL) 
            {
                writeOrderInfo(line, isFirstLine); // 첫 줄 여부 전달
                isFirstLine = 0; // 첫 번째 이후 메시지는 시간 기록하지 않음

                int textId;
                if (sscanf(line, "제품번호 : %d", &textId) == 1) {
                    openImage(textId);
                }
                line = strtok(NULL, "\n");
            }
        }

        close(new_socket);
        //printf("Connection closed\n");
    }

    close(server_fd);
    return 0;
}

