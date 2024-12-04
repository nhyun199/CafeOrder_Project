#ifndef TESTVIEW_HPP
#define TESTVIEW_HPP

#include <gui_generated/test_screen/TESTViewBase.hpp>
#include <gui/test_screen/TESTPresenter.hpp>
#include <cstring>

class TESTView : public TESTViewBase
{
public:
    TESTView();
    virtual ~TESTView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    void formatPriceWithComma(uint32_t value, Unicode::UnicodeChar* buffer, uint16_t bufferSize);

protected:
    uint32_t counter;
    uint32_t price;
    uint32_t _totalPrice;
    uint16_t imageCode;
    int textID;
};

#endif // TESTVIEW_HPP
