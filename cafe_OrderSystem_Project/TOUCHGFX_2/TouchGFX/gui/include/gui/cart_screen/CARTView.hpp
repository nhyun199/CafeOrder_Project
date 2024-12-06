#ifndef CARTVIEW_HPP
#define CARTVIEW_HPP

#include <gui_generated/cart_screen/CARTViewBase.hpp>
#include <gui/cart_screen/CARTPresenter.hpp>
#include <string>
#include <vector>
#include <lwip/sockets.h>
#include <menu.h>
using namespace std;

class CARTView : public CARTViewBase
{
public:
    CARTView();
    virtual ~CARTView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void transmittInfo();
    void addOrder(int index, int textId, uint32_t sumCount, uint32_t sumPrice);
    void formatPriceWithComma(uint32_t value, Unicode::UnicodeChar* buffer, uint32_t bufferSize);
    TextArea* getGAEText(int index);
    TextArea* getWONText(int index);
    uint32_t calculateTotalPrice();
protected:
};

#endif // CARTVIEW_HPP
