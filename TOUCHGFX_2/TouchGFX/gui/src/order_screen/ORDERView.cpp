#include <gui/order_screen/ORDERView.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

ORDERView::ORDERView()
{

}

void ORDERView::setupScreen()
{
    ORDERViewBase::setupScreen();
}

void ORDERView::tearDownScreen()
{
    ORDERViewBase::tearDownScreen();
}

void ORDERView::hiddenContainer()
{
  initial.setVisible(false);
  recommend.setVisible(false);
  coffe.setVisible(false);
  beverage.setVisible(false);
  tea.setVisible(false);
  food.setVisible(false);

  initial.invalidate();
  recommend.invalidate();
  coffe.invalidate();
  beverage.invalidate();
  tea.invalidate();
  food.invalidate();
}

void ORDERView::selected_recommend()
{
    hiddenContainer();
    recommend.setVisible(true);
    recommend.invalidate();
}

void ORDERView::selected_coffe()
{
    hiddenContainer();
    coffe.setVisible(true);
    coffe.invalidate();
}

void ORDERView::selected_beverage()
{
    hiddenContainer();
    beverage.setVisible(true);
    beverage.invalidate();
}

void ORDERView::selected_tea()
{
    hiddenContainer();
    tea.setVisible(true);
    tea.invalidate();
}

void ORDERView::selected_food()
{
    hiddenContainer();
    food.setVisible(true);
    food.invalidate();
}

void ORDERView::deselectable_button()
{
    hiddenContainer();
    initial.setVisible(true);
    initial.invalidate();
}

void ORDERView::formatPriceWithComma(uint32_t value, Unicode::UnicodeChar* buffer, uint16_t bufferSize)
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

void ORDERView::onAddButtonClicked()
{
    counter++;
    _totalPrice = price * counter;

    Unicode::snprintf(menuCountBuffer, MENUCOUNT_SIZE, "%d", counter);
    formatPriceWithComma(_totalPrice, menuPriceBuffer, MENUPRICE_SIZE);
    formatPriceWithComma(_totalPrice, totalPriceBuffer, TOTALPRICE_SIZE);

    menuCount.invalidate();
    menuPrice.invalidate();
    totalPrice.invalidate();
}

void ORDERView::onMinusButtonClicked()
{
    if (counter > 1)
    {
        counter--;
        _totalPrice = price * counter;

        Unicode::snprintf(menuCountBuffer, MENUCOUNT_SIZE, "%d", counter);
        formatPriceWithComma(_totalPrice, menuPriceBuffer, MENUPRICE_SIZE);
        formatPriceWithComma(_totalPrice, totalPriceBuffer, TOTALPRICE_SIZE);

        menuCount.invalidate();
        menuPrice.invalidate();
        totalPrice.invalidate();
    }
}

void ORDERView::hideDetail()
{
  orderDetail.setVisible(false);
  scrollableContainer1.setVisible(true);
  orderDetail.invalidate();
  scrollableContainer1.invalidate();
}

void ORDERView::nowPurchase()
{
  presenter->saveCounter(counter);
  presenter->savePrice(price);
  presenter->saveTotalPrice(_totalPrice);
  presenter->saveImageCode(imageCode);
  presenter->saveTextID(textID);
}

void ORDERView::menu0()
{
  orderDetail.setVisible(true);
  scrollableContainer1.setVisible(false);
  counter = 1;
  price = 3000;
  _totalPrice = price;
  imageCode = BITMAP_MENU_0_ID;
  textID = T_MENUTEXT0;
  menuImage.setBitmap(touchgfx::Bitmap(imageCode));
  formatPriceWithComma(price, menuPriceBuffer, MENUPRICE_SIZE);
  formatPriceWithComma(price, totalPriceBuffer, TOTALPRICE_SIZE);
  Unicode::snprintf(menuCountBuffer, MENUCOUNT_SIZE, "%d", counter);
  menuCount.invalidate();
  menuImage.invalidate();
  menuPrice.invalidate();
  totalPrice.invalidate();
  orderDetail.invalidate();
  scrollableContainer1.invalidate();
}

void ORDERView::menu1()
{
  orderDetail.setVisible(true);
  scrollableContainer1.setVisible(false);
  counter = 1;
  price = 3900;
  _totalPrice = price;
  imageCode = BITMAP_MENU_1_ID;
  textID = T_MENUTEXT1;
  menuImage.setBitmap(touchgfx::Bitmap(imageCode));
  formatPriceWithComma(price, menuPriceBuffer, MENUPRICE_SIZE);
  formatPriceWithComma(price, totalPriceBuffer, TOTALPRICE_SIZE);
  Unicode::snprintf(menuCountBuffer, MENUCOUNT_SIZE, "%d", counter);
  menuCount.invalidate();
  menuImage.invalidate();
  menuPrice.invalidate();
  totalPrice.invalidate();
  orderDetail.invalidate();
  scrollableContainer1.invalidate();
}

void ORDERView::menu2()
{
  orderDetail.setVisible(true);
  scrollableContainer1.setVisible(false);
  counter = 1;
  price = 3700;
  _totalPrice = price;
  imageCode = BITMAP_MENU_2_ID;
  textID = T_MENUTEXT2;
  menuImage.setBitmap(touchgfx::Bitmap(imageCode));
  formatPriceWithComma(price, menuPriceBuffer, MENUPRICE_SIZE);
  formatPriceWithComma(price, totalPriceBuffer, TOTALPRICE_SIZE);
  Unicode::snprintf(menuCountBuffer, MENUCOUNT_SIZE, "%d", counter);
  menuCount.invalidate();
  menuImage.invalidate();
  menuPrice.invalidate();
  totalPrice.invalidate();
  orderDetail.invalidate();
  scrollableContainer1.invalidate();
}

void ORDERView::menu3()
{
  orderDetail.setVisible(true);
  scrollableContainer1.setVisible(false);
  counter = 1;
  price = 3900;
  _totalPrice = price;
  imageCode = BITMAP_MENU_3_ID;
  textID = T_MENUTEXT3;
  menuImage.setBitmap(touchgfx::Bitmap(imageCode));
  formatPriceWithComma(price, menuPriceBuffer, MENUPRICE_SIZE);
  formatPriceWithComma(price, totalPriceBuffer, TOTALPRICE_SIZE);
  Unicode::snprintf(menuCountBuffer, MENUCOUNT_SIZE, "%d", counter);
  menuCount.invalidate();
  menuImage.invalidate();
  menuPrice.invalidate();
  totalPrice.invalidate();
  orderDetail.invalidate();
  scrollableContainer1.invalidate();
}

void ORDERView::menu4()
{
  orderDetail.setVisible(true);
  scrollableContainer1.setVisible(false);
  counter = 1;
  price = 4200;
  _totalPrice = price;
  imageCode = BITMAP_MENU_4_ID;
  textID = T_MENUTEXT4;
  menuImage.setBitmap(touchgfx::Bitmap(imageCode));
  formatPriceWithComma(price, menuPriceBuffer, MENUPRICE_SIZE);
  formatPriceWithComma(price, totalPriceBuffer, TOTALPRICE_SIZE);
  Unicode::snprintf(menuCountBuffer, MENUCOUNT_SIZE, "%d", counter);
  menuCount.invalidate();
  menuImage.invalidate();
  menuPrice.invalidate();
  totalPrice.invalidate();
  orderDetail.invalidate();
  scrollableContainer1.invalidate();
}

void ORDERView::menu5()
{
  orderDetail.setVisible(true);
  scrollableContainer1.setVisible(false);
  counter = 1;
  price = 2000;
  _totalPrice = price;
  imageCode = BITMAP_MENU_5_ID;
  textID = T_MENUTEXT5;
  menuImage.setBitmap(touchgfx::Bitmap(imageCode));
  formatPriceWithComma(price, menuPriceBuffer, MENUPRICE_SIZE);
  formatPriceWithComma(price, totalPriceBuffer, TOTALPRICE_SIZE);
  Unicode::snprintf(menuCountBuffer, MENUCOUNT_SIZE, "%d", counter);
  menuCount.invalidate();
  menuImage.invalidate();
  menuPrice.invalidate();
  totalPrice.invalidate();
  orderDetail.invalidate();
  scrollableContainer1.invalidate();
}

void ORDERView::menu6()
{
  orderDetail.setVisible(true);
  scrollableContainer1.setVisible(false);
  counter = 1;
  price = 1500;
  _totalPrice = price;
  imageCode = BITMAP_MENU_6_ID;
  textID = T_MENUTEXT6;
  menuImage.setBitmap(touchgfx::Bitmap(imageCode));
  formatPriceWithComma(price, menuPriceBuffer, MENUPRICE_SIZE);
  formatPriceWithComma(price, totalPriceBuffer, TOTALPRICE_SIZE);
  Unicode::snprintf(menuCountBuffer, MENUCOUNT_SIZE, "%d", counter);
  menuCount.invalidate();
  menuImage.invalidate();
  menuPrice.invalidate();
  totalPrice.invalidate();
  orderDetail.invalidate();
  scrollableContainer1.invalidate();
}

void ORDERView::menu7()
{
  orderDetail.setVisible(true);
  scrollableContainer1.setVisible(false);
  counter = 1;
  price = 3900;
  _totalPrice = price;
  imageCode = BITMAP_MENU_7_ID;
  textID = T_MENUTEXT7;
  menuImage.setBitmap(touchgfx::Bitmap(imageCode));
  formatPriceWithComma(price, menuPriceBuffer, MENUPRICE_SIZE);
  formatPriceWithComma(price, totalPriceBuffer, TOTALPRICE_SIZE);
  Unicode::snprintf(menuCountBuffer, MENUCOUNT_SIZE, "%d", counter);
  menuCount.invalidate();
  menuImage.invalidate();
  menuPrice.invalidate();
  totalPrice.invalidate();
  orderDetail.invalidate();
  scrollableContainer1.invalidate();
}

void ORDERView::menu8()
{
  orderDetail.setVisible(true);
  scrollableContainer1.setVisible(false);
  counter = 1;
  price = 3900;
  _totalPrice = price;
  imageCode = BITMAP_MENU_8_ID;
  textID = T_MENUTEXT8;
  menuImage.setBitmap(touchgfx::Bitmap(imageCode));
  formatPriceWithComma(price, menuPriceBuffer, MENUPRICE_SIZE);
  formatPriceWithComma(price, totalPriceBuffer, TOTALPRICE_SIZE);
  Unicode::snprintf(menuCountBuffer, MENUCOUNT_SIZE, "%d", counter);
  menuCount.invalidate();
  menuImage.invalidate();
  menuPrice.invalidate();
  totalPrice.invalidate();
  orderDetail.invalidate();
  scrollableContainer1.invalidate();
}

void ORDERView::menu9()
{
  orderDetail.setVisible(true);
  scrollableContainer1.setVisible(false);
  counter = 1;
  price = 3000;
  _totalPrice = price;
  imageCode = BITMAP_MENU_9_ID;
  textID = T_MENUTEXT9;
  menuImage.setBitmap(touchgfx::Bitmap(imageCode));
  formatPriceWithComma(price, menuPriceBuffer, MENUPRICE_SIZE);
  formatPriceWithComma(price, totalPriceBuffer, TOTALPRICE_SIZE);
  Unicode::snprintf(menuCountBuffer, MENUCOUNT_SIZE, "%d", counter);
  menuCount.invalidate();
  menuImage.invalidate();
  menuPrice.invalidate();
  totalPrice.invalidate();
  orderDetail.invalidate();
  scrollableContainer1.invalidate();
}

void ORDERView::menu10()
{
  orderDetail.setVisible(true);
  scrollableContainer1.setVisible(false);
  counter = 1;
  price = 3000;
  _totalPrice = price;
  imageCode = BITMAP_MENU_10_ID;
  textID = T_MENUTEXT10;
  menuImage.setBitmap(touchgfx::Bitmap(imageCode));
  formatPriceWithComma(price, menuPriceBuffer, MENUPRICE_SIZE);
  formatPriceWithComma(price, totalPriceBuffer, TOTALPRICE_SIZE);
  Unicode::snprintf(menuCountBuffer, MENUCOUNT_SIZE, "%d", counter);
  menuCount.invalidate();
  menuImage.invalidate();
  menuPrice.invalidate();
  totalPrice.invalidate();
  orderDetail.invalidate();
  scrollableContainer1.invalidate();
}

void ORDERView::menu11()
{
  orderDetail.setVisible(true);
  scrollableContainer1.setVisible(false);
  counter = 1;
  price = 3000;
  _totalPrice = price;
  imageCode = BITMAP_MENU_11_ID;
  textID = T_MENUTEXT11;
  menuImage.setBitmap(touchgfx::Bitmap(imageCode));
  formatPriceWithComma(price, menuPriceBuffer, MENUPRICE_SIZE);
  formatPriceWithComma(price, totalPriceBuffer, TOTALPRICE_SIZE);
  Unicode::snprintf(menuCountBuffer, MENUCOUNT_SIZE, "%d", counter);
  menuCount.invalidate();
  menuImage.invalidate();
  menuPrice.invalidate();
  totalPrice.invalidate();
  orderDetail.invalidate();
  scrollableContainer1.invalidate();
}

void ORDERView::menu12()
{
  orderDetail.setVisible(true);
  scrollableContainer1.setVisible(false);
  counter = 1;
  price = 3000;
  _totalPrice = price;
  imageCode = BITMAP_MENU_12_ID;
  textID = T_MENUTEXT12;
  menuImage.setBitmap(touchgfx::Bitmap(imageCode));
  formatPriceWithComma(price, menuPriceBuffer, MENUPRICE_SIZE);
  formatPriceWithComma(price, totalPriceBuffer, TOTALPRICE_SIZE);
  Unicode::snprintf(menuCountBuffer, MENUCOUNT_SIZE, "%d", counter);
  menuCount.invalidate();
  menuImage.invalidate();
  menuPrice.invalidate();
  totalPrice.invalidate();
  orderDetail.invalidate();
  scrollableContainer1.invalidate();
}

void ORDERView::menu13()
{
  orderDetail.setVisible(true);
  scrollableContainer1.setVisible(false);
  counter = 1;
  price = 3500;
  _totalPrice = price;
  imageCode = BITMAP_MENU_13_ID;
  textID = T_MENUTEXT13;
  menuImage.setBitmap(touchgfx::Bitmap(imageCode));
  formatPriceWithComma(price, menuPriceBuffer, MENUPRICE_SIZE);
  formatPriceWithComma(price, totalPriceBuffer, TOTALPRICE_SIZE);
  Unicode::snprintf(menuCountBuffer, MENUCOUNT_SIZE, "%d", counter);
  menuCount.invalidate();
  menuImage.invalidate();
  menuPrice.invalidate();
  totalPrice.invalidate();
  orderDetail.invalidate();
  scrollableContainer1.invalidate();
}

void ORDERView::menu14()
{
  orderDetail.setVisible(true);
  scrollableContainer1.setVisible(false);
  counter = 1;
  price = 3300;
  _totalPrice = price;
  imageCode = BITMAP_MENU_14_ID;
  textID = T_MENUTEXT14;
  menuImage.setBitmap(touchgfx::Bitmap(imageCode));
  formatPriceWithComma(price, menuPriceBuffer, MENUPRICE_SIZE);
  formatPriceWithComma(price, totalPriceBuffer, TOTALPRICE_SIZE);
  Unicode::snprintf(menuCountBuffer, MENUCOUNT_SIZE, "%d", counter);
  menuCount.invalidate();
  menuImage.invalidate();
  menuPrice.invalidate();
  totalPrice.invalidate();
  orderDetail.invalidate();
  scrollableContainer1.invalidate();
}

void ORDERView::menu15()
{
  orderDetail.setVisible(true);
  scrollableContainer1.setVisible(false);
  counter = 1;
  price = 3300;
  _totalPrice = price;
  imageCode = BITMAP_MENU_15_ID;
  textID = T_MENUTEXT15;
  menuImage.setBitmap(touchgfx::Bitmap(imageCode));
  formatPriceWithComma(price, menuPriceBuffer, MENUPRICE_SIZE);
  formatPriceWithComma(price, totalPriceBuffer, TOTALPRICE_SIZE);
  Unicode::snprintf(menuCountBuffer, MENUCOUNT_SIZE, "%d", counter);
  menuCount.invalidate();
  menuImage.invalidate();
  menuPrice.invalidate();
  totalPrice.invalidate();
  orderDetail.invalidate();
  scrollableContainer1.invalidate();
}

void ORDERView::menu16()
{
  orderDetail.setVisible(true);
  scrollableContainer1.setVisible(false);
  counter = 1;
  price = 3500;
  _totalPrice = price;
  imageCode = BITMAP_MENU_16_ID;
  textID = T_MENUTEXT16;
  menuImage.setBitmap(touchgfx::Bitmap(imageCode));
  formatPriceWithComma(price, menuPriceBuffer, MENUPRICE_SIZE);
  formatPriceWithComma(price, totalPriceBuffer, TOTALPRICE_SIZE);
  Unicode::snprintf(menuCountBuffer, MENUCOUNT_SIZE, "%d", counter);
  menuCount.invalidate();
  menuImage.invalidate();
  menuPrice.invalidate();
  totalPrice.invalidate();
  orderDetail.invalidate();
  scrollableContainer1.invalidate();
}

void ORDERView::menu17()
{
  orderDetail.setVisible(true);
  scrollableContainer1.setVisible(false);
  counter = 1;
  price = 3500;
  _totalPrice = price;
  imageCode = BITMAP_MENU_17_ID;
  textID = T_MENUTEXT17;
  menuImage.setBitmap(touchgfx::Bitmap(imageCode));
  formatPriceWithComma(price, menuPriceBuffer, MENUPRICE_SIZE);
  formatPriceWithComma(price, totalPriceBuffer, TOTALPRICE_SIZE);
  Unicode::snprintf(menuCountBuffer, MENUCOUNT_SIZE, "%d", counter);
  menuCount.invalidate();
  menuImage.invalidate();
  menuPrice.invalidate();
  totalPrice.invalidate();
  orderDetail.invalidate();
  scrollableContainer1.invalidate();
}

void ORDERView::menu18()
{
  orderDetail.setVisible(true);
  scrollableContainer1.setVisible(false);
  counter = 1;
  price = 3500;
  _totalPrice = price;
  imageCode = BITMAP_MENU_18_ID;
  textID = T_MENUTEXT18;
  menuImage.setBitmap(touchgfx::Bitmap(imageCode));
  formatPriceWithComma(price, menuPriceBuffer, MENUPRICE_SIZE);
  formatPriceWithComma(price, totalPriceBuffer, TOTALPRICE_SIZE);
  Unicode::snprintf(menuCountBuffer, MENUCOUNT_SIZE, "%d", counter);
  menuCount.invalidate();
  menuImage.invalidate();
  menuPrice.invalidate();
  totalPrice.invalidate();
  orderDetail.invalidate();
  scrollableContainer1.invalidate();
}
