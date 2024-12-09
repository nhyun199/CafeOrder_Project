#ifndef CARTPRESENTER_HPP
#define CARTPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class CARTView;

class CARTPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    CARTPresenter(CARTView& v);

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

    virtual ~CARTPresenter() {}

    int getCartTextID(int index)
    {
      return model->getCartItem(index)._textID;
    }

    int getCartSumCount(int index)
    {
      return model->getCartItem(index).sumCount;
    }

    int getCartSumPrice(int index)
    {
      return model->getCartItem(index).sumPrice;
    }

    int getCartSize()
    {
      return model->getCartSize();
    }

    void deleteCartList()
    {
      model->deleteCartList();
    }

private:
    CARTPresenter();

    CARTView& view;
};

#endif // CARTPRESENTER_HPP
