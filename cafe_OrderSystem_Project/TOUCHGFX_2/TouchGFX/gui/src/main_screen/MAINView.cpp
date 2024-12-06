#include <gui/main_screen/MAINView.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/Callback.hpp>
#include <lwip/sockets.h>
#include <string>

#define PORT 8080
#define ADDRESS "192.168.0.244"

using namespace std;

MAINView::MAINView()
{

}

void MAINView::setupScreen()
{
    MAINViewBase::setupScreen();
}


void MAINView::tearDownScreen()
{
    MAINViewBase::tearDownScreen();
}

void MAINView::Test1()
{
  int sock;
  struct sockaddr_in server_addr;
  string message = "Hello from STM32!\r\n";

  sock = socket(AF_INET, SOCK_STREAM, 0);
  if (sock < 0) {
      printf("Socket creation failed\r\n");
      return;
  }

  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(PORT);
  server_addr.sin_addr.s_addr = inet_addr(ADDRESS);

  if (connect(sock, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
      printf("Connection to server failed\r\n");
      close(sock);
      return;
  }

  send(sock, message.c_str(), strlen(message.c_str()), 0);
  printf("Message sent: %s\r\n", message.c_str());

  close(sock);
}
