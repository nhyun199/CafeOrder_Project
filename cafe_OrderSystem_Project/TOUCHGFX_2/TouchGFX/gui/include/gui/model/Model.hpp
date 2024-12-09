#ifndef MODEL_HPP
#define MODEL_HPP

#include <touchgfx/hal/types.hpp>
#include <string>
#include <cstring>
#include <vector>

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();

    typedef struct _Cart
    {
      int _textID;
      uint32_t _counter;
      uint32_t _price;
      uint32_t sumCount = 0;
      uint32_t sumPrice = 0;
    } Cart;

    void saveCounter(uint32_t saveCounter)
    {
      counter = saveCounter;
    }

    void savePrice(uint32_t savePrice)
    {
      price = savePrice;
    }

    void saveTotalPrice(uint32_t saveTotalPrice)
    {
      _totalPrice = saveTotalPrice;
    }

    void saveImageCode(uint16_t saveImageCode)
    {
      imageCode = saveImageCode;
    }

    void saveTextID(int saveTextID)
    {
      textID = saveTextID;
    }

    uint32_t getCounter()
    {
      return counter;
    }

    uint32_t getPrice()
    {
      return price;
    }

    uint32_t getTotalPrice()
    {
      return _totalPrice;
    }

    uint16_t getImageCode()
    {
      return imageCode;
    }

    int getTextID()
    {
      return textID;
    }

    const Cart& getCartItem(int index)
    {
      return CartList[index];
    }

    int getCartSize()
    {
      return CartList.size();
    }


    void addItem(int textId, uint32_t counter, uint32_t price)
    {
      Cart newMenu;
      newMenu._textID = textId;
      newMenu._counter = counter;
      newMenu._price = price;
      newMenu.sumCount = counter;
      newMenu.sumPrice = price * counter;
      CartList.add(newMenu);
    }

    void updateItem(int textId, uint32_t counter, uint32_t price)
    {
      if(CartList.size() == 0)
	addItem(textId, counter, price);
      else
      {
	bool found = false;
	for(int i = 0; i < CartList.size(); i++)
	{
	  if(CartList[i]._textID == textId)
	  {
	      CartList[i]._counter = counter;
	      CartList[i].sumCount += counter;
	      CartList[i].sumPrice = CartList[i].sumCount * CartList[i]._price;
	      found = true;
	      break;
	  }
	}
	if(!found)
	   addItem(textId, counter, price);
      }
    }

    void deleteCartList()
    {
      CartList.clear();
    }

protected:
    ModelListener* modelListener;
    uint32_t counter;
    uint32_t price;
    uint32_t _totalPrice;
    uint16_t imageCode;
    int textID;

    touchgfx::Vector<Cart, 19> CartList;
};

#endif // MODEL_HPP
