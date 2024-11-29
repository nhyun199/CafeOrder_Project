#ifndef ORDERVIEW_HPP
#define ORDERVIEW_HPP

#include <gui_generated/order_screen/ORDERViewBase.hpp>
#include <gui/order_screen/ORDERPresenter.hpp>

class ORDERView : public ORDERViewBase
{
public:
    ORDERView();
    virtual ~ORDERView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // ORDERVIEW_HPP
