#ifndef PAYMENTVIEW_HPP
#define PAYMENTVIEW_HPP

#include <gui_generated/payment_screen/PAYMENTViewBase.hpp>
#include <gui/payment_screen/PAYMENTPresenter.hpp>

class PAYMENTView : public PAYMENTViewBase
{
public:
    PAYMENTView();
    virtual ~PAYMENTView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    void formatPriceWithComma(uint32_t value, Unicode::UnicodeChar* buffer, uint16_t bufferSize);

    /*override function*/
    virtual void transmittServer();
protected:
    uint32_t counter;
    uint32_t price;
    uint32_t _totalPrice;
    uint16_t imageCode;
    int textID;
};

#endif // PAYMENTVIEW_HPP
