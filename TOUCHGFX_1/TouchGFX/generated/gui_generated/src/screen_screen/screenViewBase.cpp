/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen_screen/screenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

screenViewBase::screenViewBase() :
    buttonCallback(this, &screenViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    box1.setPosition(0, 0, 480, 272);
    box1.setColor(touchgfx::Color::getColorFromRGB(201, 245, 235));
    add(box1);

    button1.setXY(120, 144);
    button1.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUNDED_NORMAL_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUNDED_PRESSED_ID));
    button1.setAction(buttonCallback);
    add(button1);

    button2.setXY(120, 204);
    button2.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUNDED_NORMAL_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUNDED_PRESSED_ID));
    button2.setAction(buttonCallback);
    add(button2);

    textArea1.setXY(147, 59);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_7AD2));
    add(textArea1);

    buttonWithLabel1.setXY(20, 23);
    buttonWithLabel1.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_TINY_ROUND_ACTIVE_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_TINY_ROUND_PRESSED_ID));
    buttonWithLabel1.setLabelText(touchgfx::TypedText(T___SINGLEUSE_6PVO));
    buttonWithLabel1.setLabelColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    buttonWithLabel1.setLabelColorPressed(touchgfx::Color::getColorFromRGB(0, 0, 0));
    buttonWithLabel1.setAction(buttonCallback);
    add(buttonWithLabel1);
}

screenViewBase::~screenViewBase()
{

}

void screenViewBase::setupScreen()
{

}

void screenViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &button1)
    {
        //Interaction1
        //When button1 clicked change screen to Screen1
        //Go to Screen1 with no screen transition
        application().gotoScreen1ScreenNoTransition();
    }
    if (&src == &button2)
    {
        //Interaction2
        //When button2 clicked hide textArea1
        //Hide textArea1
        textArea1.setVisible(false);
        textArea1.invalidate();
    }
    if (&src == &buttonWithLabel1)
    {
        //Interaction3
        //When buttonWithLabel1 clicked execute C++ code
        //Execute C++ code
        ToggleLED();
    }
}
