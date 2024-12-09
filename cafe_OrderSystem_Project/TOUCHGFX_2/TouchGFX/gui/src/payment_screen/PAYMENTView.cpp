#include <gui/payment_screen/PAYMENTView.hpp>
#include <string>


#define PORT 8080
#define ADDRESS "192.168.0.244"

using namespace std;

PAYMENTView::PAYMENTView()
{

}

void PAYMENTView::setupScreen()
{
    PAYMENTViewBase::setupScreen();

    counter = presenter->getCounter();
    _totalPrice = presenter->getTotalPrice();
    imageCode = presenter->getImageCode();
    textID = presenter->getTextID();

    formatPriceWithComma(_totalPrice, totalPriceBuffer, TOTALPRICE_SIZE);
    formatPriceWithComma(_totalPrice, totalPrice2Buffer, TOTALPRICE2_SIZE);
    Unicode::snprintf(countBuffer, COUNT_SIZE, "%d", counter);
    menuImage.setBitmap(Bitmap(imageCode));
    menuname.setTypedText(TypedText(textID));
    totalPrice.invalidate();
    totalPrice2.invalidate();
    count.invalidate();
    menuImage.invalidate();
}

void PAYMENTView::tearDownScreen()
{
    PAYMENTViewBase::tearDownScreen();
}

void PAYMENTView::formatPriceWithComma(uint32_t value, Unicode::UnicodeChar* buffer, uint16_t bufferSize)
{
  char tempBuffer[20];
  snprintf(tempBuffer, sizeof(tempBuffer), "%lu", (unsigned long)value);

  int len = strlen(tempBuffer);
  int commaCount = (len - 1) / 3;
  int totalLen = len + commaCount;
  int bufferIndex = totalLen - 1;
  int count = 0;

  for (int i = len - 1; i >= 0; --i) {
      if (count == 3) {
          buffer[bufferIndex--] = ',';
          count = 0;
      }
      buffer[bufferIndex--] = tempBuffer[i];
      count++;
  }

  buffer[totalLen] = '\0';
}

void PAYMENTView::transmittinfo()
{
  int sock;
  struct sockaddr_in server_addr;
  char buffer[1024];

  sock = socket(AF_INET, SOCK_STREAM, 0);
  if (sock < 0) {
      printf("Socket creation failed\n");
      return;
  }

  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(PORT);
  server_addr.sin_addr.s_addr = inet_addr(ADDRESS);

  if (connect(sock, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
      printf("Connection to server failed\n");
      close(sock);
      return;
  }

  snprintf(buffer, sizeof(buffer), "------ 주문 접수\r\n");
  send(sock, buffer, strlen(buffer), 0);

  string ex1 = "수량";
  string ex2 = "금액";
  string _menu = Menu::menuList[textID];
  uint32_t _count = counter;
  uint32_t _price = _totalPrice;
  int _textId = textID;

  snprintf(buffer, sizeof(buffer), "제품번호 : %-5d 제품명 : %-25s %-5s : %-5lu %-5s : %-10lu\r\n",
	   _textId, _menu.c_str(), ex1.c_str(), _count, ex2.c_str(), _price);
  send(sock, buffer, strlen(buffer), 0);

  snprintf(buffer, sizeof(buffer), "총 %lu원 결제되었습니다.\n이용해주셔서 감사합니다.\r\n\n", _price);
  send(sock, buffer, strlen(buffer), 0);

  close(sock);
}
