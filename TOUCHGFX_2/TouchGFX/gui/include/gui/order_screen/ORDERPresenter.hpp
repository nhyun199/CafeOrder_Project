#ifndef ORDERPRESENTER_HPP
#define ORDERPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ORDERView;

class ORDERPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ORDERPresenter(ORDERView& v);

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

    virtual ~ORDERPresenter() {}

private:
    ORDERPresenter();

    ORDERView& view;
};

#endif // ORDERPRESENTER_HPP
