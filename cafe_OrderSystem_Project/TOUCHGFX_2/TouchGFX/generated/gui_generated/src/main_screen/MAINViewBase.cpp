/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/main_screen/MAINViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

MAINViewBase::MAINViewBase() :
    buttonCallback(this, &MAINViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 272, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    Tail.setPosition(0, 425, 272, 55);
    tailBackground.setPosition(0, 0, 272, 55);
    tailBackground.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Tail.add(tailBackground);

    Navigation.setPosition(0, 3, 272, 48);
    basketButton.setXY(162, 1);
    basketButton.setBitmaps(touchgfx::Bitmap(BITMAP_BASKET_40_48_60_ID), touchgfx::Bitmap(BITMAP_BASKET_40_48_ID));
    basketButton.setAction(buttonCallback);
    Navigation.add(basketButton);

    orderButton.setXY(72, 1);
    orderButton.setBitmaps(touchgfx::Bitmap(BITMAP_ORDER_40_48_60_ID), touchgfx::Bitmap(BITMAP_ORDER_40_48_ID));
    orderButton.setAction(buttonCallback);
    Navigation.add(orderButton);

    Tail.add(Navigation);

    add(Tail);

    Body.setPosition(0, 55, 272, 370);
    Body.enableHorizontalScroll(false);
    Body.setScrollbarsColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    Body.setScrollbarsAlpha(255);
    Body.setScrollbarsVisible(false);
    bodyBackground.setPosition(0, 0, 272, 512);
    bodyBackground.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Body.add(bodyBackground);

    Recommend.setPosition(12, 42, 250, 130);
    Recommend.enableVerticalScroll(false);
    Recommend.setScrollbarsColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    Recommend.setScrollbarsAlpha(255);
    Recommend.setScrollbarsVisible(false);
    recommendMenu.setPosition(0, 0, 600, 130);
    menu1.setPosition(0, 0, 100, 112);
    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_AMERICANO_100100_ID));
    menu1.add(image1);

    textArea1.setXY(28, 99);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_DREI));
    menu1.add(textArea1);

    recommendMenu.add(menu1);

    menu2.setPosition(120, 0, 100, 124);
    image1_1.setXY(0, 0);
    image1_1.setBitmap(touchgfx::Bitmap(BITMAP_SANTA_COCONUT_APPLETEA_LATTE_100100_ID));
    menu2.add(image1_1);

    textArea1_1.setXY(24, 100);
    textArea1_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1_1.setLinespacing(0);
    textArea1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_C70E));
    menu2.add(textArea1_1);

    recommendMenu.add(menu2);

    menu3.setPosition(240, 0, 100, 112);
    image1_2.setXY(0, 0);
    image1_2.setBitmap(touchgfx::Bitmap(BITMAP_STRAWBERRY_LATTE_100100_ID));
    menu3.add(image1_2);

    textArea1_2.setXY(32, 100);
    textArea1_2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1_2.setLinespacing(0);
    textArea1_2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_NDFL));
    menu3.add(textArea1_2);

    recommendMenu.add(menu3);

    menu4.setPosition(360, 0, 100, 112);
    image1_3.setXY(0, 0);
    image1_3.setBitmap(touchgfx::Bitmap(BITMAP_STRAWBERRY_COOKIE_FRAPPE_100100_ID));
    menu4.add(image1_3);

    textArea1_3.setXY(19, 100);
    textArea1_3.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1_3.setLinespacing(0);
    textArea1_3.setTypedText(touchgfx::TypedText(T___SINGLEUSE_MEAM));
    menu4.add(textArea1_3);

    recommendMenu.add(menu4);

    menu5.setPosition(480, 0, 100, 112);
    image1_4.setXY(0, 0);
    image1_4.setBitmap(touchgfx::Bitmap(BITMAP_CUBE_LATTE_100100_ID));
    menu5.add(image1_4);

    textArea1_4.setXY(32, 100);
    textArea1_4.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1_4.setLinespacing(0);
    textArea1_4.setTypedText(touchgfx::TypedText(T___SINGLEUSE_T6JZ));
    menu5.add(textArea1_4);

    recommendMenu.add(menu5);

    Recommend.add(recommendMenu);

    Body.add(Recommend);

    recommendText.setXY(12, 20);
    recommendText.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    recommendText.setLinespacing(0);
    recommendText.setTypedText(touchgfx::TypedText(T___SINGLEUSE_DOT0));
    Body.add(recommendText);

    Event.setXY(12, 185);
    Event.setPageIndicatorBitmaps(touchgfx::Bitmap(BITMAP_INDICATOR1010_ID), touchgfx::Bitmap(BITMAP_INDICATOR_HIGHLIGHT1010_ID));
    Event.setPageIndicatorXY(110, 230);
    Event.setSwipeCutoff(50);
    Event.setEndSwipeElasticWidth(50);

    event1.setWidth(250);
    event1.setHeight(250);
    eventImage1.setXY(0, 0);
    eventImage1.setBitmap(touchgfx::Bitmap(BITMAP_KAKAOEVENT250250_ID));
    event1.add(eventImage1);

    Event.add(event1);

    event2.setWidth(250);
    event2.setHeight(250);
    eventImage2.setXY(0, 0);
    eventImage2.setBitmap(touchgfx::Bitmap(BITMAP_EVENT2_250250_ID));
    event2.add(eventImage2);

    Event.add(event2);

    event3.setWidth(250);
    event3.setHeight(250);
    eventImage3.setXY(0, 0);
    eventImage3.setBitmap(touchgfx::Bitmap(BITMAP_EVENT3_250250_ID));
    event3.add(eventImage3);

    Event.add(event3);

    Event.setSelectedPage(0);
    Body.add(Event);

    add(Body);

    Header.setPosition(0, 0, 272, 55);
    headerBackground.setPosition(0, 0, 272, 55);
    headerBackground.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Header.add(headerBackground);

    logoImage.setXY(86, 2);
    logoImage.setBitmap(touchgfx::Bitmap(BITMAP_BI_LOGO1_100_50_ID));
    Header.add(logoImage);

    add(Header);
}

MAINViewBase::~MAINViewBase()
{

}

void MAINViewBase::setupScreen()
{

}

void MAINViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &orderButton)
    {
        //GoOrder
        //When orderButton clicked change screen to ORDER
        //Go to ORDER with screen transition towards East
        application().gotoORDERScreenWipeTransitionEast();
    }
    if (&src == &basketButton)
    {
        //GoCart
        //When basketButton clicked change screen to CART
        //Go to CART with screen transition towards East
        application().gotoCARTScreenWipeTransitionEast();
    }
}
