#include <gui/payment_screen/PAYMENTView.hpp>

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

void PAYMENTView::transmittServer()
{
//  const Unicode::UnicodeChar* unicodeText = TypedText(textID).getText();
//  char charBuffer[50];
//  Unicode::toUTF8(unicodeText, reinterpret_cast<uint8_t*>(charBuffer), sizeof(charBuffer));
//
//  printf("주문이 접수되었습니다.\r\n");
//  printf("%-30s %-15s %-15s\r\n", "메뉴명", "수량", "금액");
//  printf("%-30s %-15lu %-15lu\r\n", charBuffer, (unsigned long)counter, (unsigned long)_totalPrice);
}
