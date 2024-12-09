#include <gui/cart_screen/CARTView.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

#define BUFFER_SIZE 20
#define PORT 8080
#define ADDRESS "192.168.0.244"

using namespace std;

CARTView::CARTView()
{

}

void CARTView::setupScreen()
{
    CARTViewBase::setupScreen();

    if(presenter->getCartSize() > 0)
    {
      for(int i = 0; i < presenter->getCartSize(); i++)
      {
	int _textId = presenter->getCartTextID(i);
	uint32_t _sumCount = presenter->getCartSumCount(i);
	uint32_t _sumPrice = presenter->getCartSumPrice(i);
	TextArea* text_gae = getGAEText(i);
	TextArea* text_won = getWONText(i);
	text_gae->setVisible(true);
	text_won->setVisible(true);
	text_gae->invalidate();
	text_won->invalidate();
	addOrder(i, _textId, _sumCount, _sumPrice);
      }
    }

    uint32_t totalPrice = calculateTotalPrice();

    formatPriceWithComma(totalPrice, lastTotalBuffer, LASTTOTAL_SIZE);
    lastTotal.invalidate();

}

void CARTView::tearDownScreen()
{
    CARTViewBase::tearDownScreen();
}

void CARTView::addOrder(int index, int textId, uint32_t sumCount, uint32_t sumPrice)
{
    TextArea* itemText = new TextArea();
    itemText->setTypedText(TypedText(textId));
    itemText->setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    nameList.add(*itemText);
    itemText->invalidate();

    TextAreaWithOneWildcard* countText = nullptr;
    TextAreaWithOneWildcard* priceText = nullptr;
    touchgfx::Unicode::UnicodeChar* countBuffer = nullptr;
    touchgfx::Unicode::UnicodeChar* priceBuffer = nullptr;

    switch(index)
    {
      case 0: countText = &order1; priceText = &order1_1; countBuffer = order1Buffer; priceBuffer = order1_1Buffer; break;
      case 1: countText = &order2; priceText = &order2_1; countBuffer = order2Buffer; priceBuffer = order2_1Buffer; break;
      case 2: countText = &order3; priceText = &order3_1; countBuffer = order3Buffer; priceBuffer = order3_1Buffer; break;
      case 3: countText = &order4; priceText = &order4_1; countBuffer = order4Buffer; priceBuffer = order4_1Buffer; break;
      case 4: countText = &order5; priceText = &order5_1; countBuffer = order5Buffer; priceBuffer = order5_1Buffer; break;
      case 5: countText = &order6; priceText = &order6_1; countBuffer = order6Buffer; priceBuffer = order6_1Buffer; break;
      case 6: countText = &order7; priceText = &order7_1; countBuffer = order7Buffer; priceBuffer = order7_1Buffer; break;
      case 7: countText = &order8; priceText = &order8_1; countBuffer = order8Buffer; priceBuffer = order8_1Buffer; break;
      case 8: countText = &order9; priceText = &order9_1; countBuffer = order9Buffer; priceBuffer = order9_1Buffer; break;
      case 9: countText = &order10; priceText = &order10_1; countBuffer = order10Buffer; priceBuffer = order10_1Buffer; break;
      case 10: countText = &order11; priceText = &order11_1; countBuffer = order11Buffer; priceBuffer = order11_1Buffer; break;
      case 11: countText = &order12; priceText = &order12_1; countBuffer = order12Buffer; priceBuffer = order12_1Buffer; break;
      case 12: countText = &order13; priceText = &order13_1; countBuffer = order13Buffer; priceBuffer = order13_1Buffer; break;
      case 13: countText = &order14; priceText = &order14_1; countBuffer = order14Buffer; priceBuffer = order14_1Buffer; break;
      case 14: countText = &order15; priceText = &order15_1; countBuffer = order15Buffer; priceBuffer = order15_1Buffer; break;
      case 15: countText = &order16; priceText = &order16_1; countBuffer = order16Buffer; priceBuffer = order16_1Buffer; break;
      case 16: countText = &order17; priceText = &order17_1; countBuffer = order17Buffer; priceBuffer = order17_1Buffer; break;
      case 17: countText = &order18; priceText = &order18_1; countBuffer = order18Buffer; priceBuffer = order18_1Buffer; break;
      case 18: countText = &order19; priceText = &order19_1; countBuffer = order19Buffer; priceBuffer = order19_1Buffer; break;
    }

    Unicode::snprintf(countBuffer, BUFFER_SIZE, "%d", sumCount);
    formatPriceWithComma(sumPrice, priceBuffer, BUFFER_SIZE);

    countText->setWildcard(countBuffer);
    priceText->setWildcard(priceBuffer);
    countText->invalidate();
    priceText->invalidate();
}

void CARTView::formatPriceWithComma(uint32_t value, Unicode::UnicodeChar* buffer, uint32_t bufferSize)
{
    char tempBuffer[20];
    snprintf(tempBuffer, sizeof(tempBuffer), "%lu", (unsigned long)value);

    int len = strlen(tempBuffer);
    int commaCount = (len - 1) / 3;
    int totalLen = len + commaCount;

    int bufferIndex = totalLen - 1;
    int count = 0;

    for (int i = len - 1; i >= 0; --i)
    {
        if (count == 3) {
            buffer[bufferIndex--] = ',';
            count = 0;
        }
        buffer[bufferIndex--] = tempBuffer[i];
        count++;
    }

    buffer[totalLen] = '\0';
}

TextArea* CARTView::getGAEText(int index)
{
  switch(index)
  {
    case 0: return &GAE_1;
    case 1: return &GAE_2;
    case 2: return &GAE_3;
    case 3: return &GAE_4;
    case 4: return &GAE_5;
    case 5: return &GAE_6;
    case 6: return &GAE_7;
    case 7: return &GAE_8;
    case 8: return &GAE_9;
    case 9: return &GAE_10;
    case 10: return &GAE_11;
    case 11: return &GAE_12;
    case 12: return &GAE_13;
    case 13: return &GAE_14;
    case 14: return &GAE_15;
    case 15: return &GAE_16;
    case 16: return &GAE_17;
    case 17: return &GAE_18;
    case 18: return &GAE_19;
    default: return nullptr;
  }
}

TextArea* CARTView::getWONText(int index)
{
  switch(index)
  {
    case 0: return &WON_1;
    case 1: return &WON_2;
    case 2: return &WON_3;
    case 3: return &WON_4;
    case 4: return &WON_5;
    case 5: return &WON_6;
    case 6: return &WON_7;
    case 7: return &WON_8;
    case 8: return &WON_9;
    case 9: return &WON_10;
    case 10: return &WON_11;
    case 11: return &WON_12;
    case 12: return &WON_13;
    case 13: return &WON_14;
    case 14: return &WON_15;
    case 15: return &WON_16;
    case 16: return &WON_17;
    case 17: return &WON_18;
    case 18: return &WON_19;
    default: return nullptr;
  }
}

uint32_t CARTView::calculateTotalPrice()
{
    uint32_t totalPrice = 0;

    for (int i = 0; i < presenter->getCartSize(); i++)
    {
        totalPrice += presenter->getCartSumPrice(i);
    }

    return totalPrice;
}

void CARTView::transmittInfo()
{
  int sock;
  struct sockaddr_in server_addr;
  char buffer[1024];
  string ex1 = "수량";
  string ex2 = "금액";

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

  for (int i = 0; i < presenter->getCartSize(); i++)
  {
      string _menu = Menu::menuList[presenter->getCartTextID(i)];
      uint32_t _sumCount = presenter->getCartSumCount(i);
      uint32_t _sumPrice = presenter->getCartSumPrice(i);
      int _textId = presenter->getCartTextID(i);

      snprintf(buffer, sizeof(buffer),
               "제품번호 : %-5d 제품명 : %-25s %-5s : %-5lu %-5s : %-10lu\r\n",
               _textId, _menu.c_str(), ex1.c_str(), _sumCount, ex2.c_str(), _sumPrice);
      send(sock, buffer, strlen(buffer), 0);
  }

  uint32_t totalPrice = calculateTotalPrice();
  snprintf(buffer, sizeof(buffer), "총 %lu원 결제되었습니다.\n이용해주셔서 감사합니다.\r\n\n", totalPrice);
  send(sock, buffer, strlen(buffer), 0);

  close(sock);
}

void CARTView::empty()
{
  presenter->deleteCartList();
}
