#include <gui/test_screen/TESTView.hpp>
using namespace touchgfx;

TESTView::TESTView()
{

}

void TESTView::setupScreen()
{
    TESTViewBase::setupScreen();

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

void TESTView::tearDownScreen()
{
    TESTViewBase::tearDownScreen();
}

void TESTView::formatPriceWithComma(uint32_t value, Unicode::UnicodeChar* buffer, uint16_t bufferSize)
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

