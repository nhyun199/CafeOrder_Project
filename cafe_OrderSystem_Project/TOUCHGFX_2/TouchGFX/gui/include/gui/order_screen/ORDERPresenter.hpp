#ifndef ORDERPRESENTER_HPP
#define ORDERPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>
#include <cstring>

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

    void saveCounter(uint32_t counter)
    {
      model->saveCounter(counter);
    }

    void savePrice(uint32_t price)
    {
      model->savePrice(price);
    }

    void saveTotalPrice(uint32_t totalPrice)
    {
      model->saveTotalPrice(totalPrice);
    }

    void saveImageCode(uint16_t imageCode)
    {
      model->saveImageCode(imageCode);
    }

    void saveTextID(int textID)
    {
      model->saveTextID(textID);
    }

    uint32_t getCounter()
    {
      return model->getCounter();
    }

    uint32_t getPrice()
    {
      return model->getPrice();
    }

    uint32_t getTotalPrice()
    {
      return model->getTotalPrice();
    }

    uint16_t getImageCode()
    {
      return model->getImageCode();
    }

    int getTextID()
    {
      return model->getTextID();
    }

    void updateItem(int textId, uint32_t counter, uint32_t price)
    {
      model->updateItem(textId, counter, price);
    }

private:
    ORDERPresenter();

    ORDERView& view;
};

#endif // ORDERPRESENTER_HPP
