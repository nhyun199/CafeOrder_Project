#ifndef PAYMENTVIEW_HPP
#define PAYMENTVIEW_HPP

#include <gui_generated/payment_screen/PAYMENTViewBase.hpp>
#include <gui/payment_screen/PAYMENTPresenter.hpp>
#include <lwip/sockets.h>
#include <menu.h>
class PAYMENTView : public PAYMENTViewBase
{
public:
    PAYMENTView();
    virtual ~PAYMENTView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void transmittinfo();

    void formatPriceWithComma(uint32_t value, Unicode::UnicodeChar* buffer, uint16_t bufferSize);

protected:
    uint32_t counter;
    uint32_t price;
    uint32_t _totalPrice;
    uint16_t imageCode;
    int textID;
};

#endif // PAYMENTVIEW_HPP
