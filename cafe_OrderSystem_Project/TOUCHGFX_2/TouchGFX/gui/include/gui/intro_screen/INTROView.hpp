#ifndef INTROVIEW_HPP
#define INTROVIEW_HPP

#include <gui_generated/intro_screen/INTROViewBase.hpp>
#include <gui/intro_screen/INTROPresenter.hpp>

class INTROView : public INTROViewBase
{
public:
    INTROView();
    virtual ~INTROView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // INTROVIEW_HPP
