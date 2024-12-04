#ifndef MAINVIEW_HPP
#define MAINVIEW_HPP

#include <gui_generated/main_screen/MAINViewBase.hpp>
#include <gui/main_screen/MAINPresenter.hpp>
#include <touchgfx/Callback.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <texts/TextKeysAndLanguages.hpp>

class MAINView : public MAINViewBase
{
public:
    MAINView();
    virtual ~MAINView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

protected:

private:
};

#endif // MAINVIEW_HPP
