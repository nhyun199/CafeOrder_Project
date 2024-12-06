#ifndef INTROPRESENTER_HPP
#define INTROPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class INTROView;

class INTROPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    INTROPresenter(INTROView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~INTROPresenter() {}

private:
    INTROPresenter();

    INTROView& view;
};

#endif // INTROPRESENTER_HPP
