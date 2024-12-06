#ifndef ORDERVIEW_HPP
#define ORDERVIEW_HPP

#include <gui_generated/order_screen/ORDERViewBase.hpp>
#include <gui/order_screen/ORDERPresenter.hpp>
#include <stdio.h>
#include <string.h>

class ORDERView : public ORDERViewBase
{
public:
    ORDERView();
    virtual ~ORDERView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    /*override virtual function*/
    virtual void selected_recommend();
    virtual void selected_coffe();
    virtual void selected_beverage();
    virtual void selected_tea();
    virtual void selected_food();
    virtual void deselectable_button();
    virtual void onAddButtonClicked();
    virtual void onMinusButtonClicked();
    virtual void hideDetail();
    virtual void nowPurchase();
    virtual void putMenu();

    virtual void menu0();
    virtual void menu1();
    virtual void menu2();
    virtual void menu3();
    virtual void menu4();
    virtual void menu5();
    virtual void menu6();
    virtual void menu7();
    virtual void menu8();
    virtual void menu9();
    virtual void menu10();
    virtual void menu11();
    virtual void menu12();
    virtual void menu13();
    virtual void menu14();
    virtual void menu15();
    virtual void menu16();
    virtual void menu17();
    virtual void menu18();

    /*function*/
    void formatPriceWithComma(uint32_t value, Unicode::UnicodeChar* buffer, uint16_t bufferSize);
    void hiddenContainer();


    /*member*/
    uint32_t counter;
    uint32_t price;
    uint32_t _totalPrice;
    uint16_t imageCode;
    int textID;

protected:
};

#endif // ORDERVIEW_HPP
