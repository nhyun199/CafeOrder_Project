#ifndef MODEL_HPP
#define MODEL_HPP

#include <touchgfx/hal/types.hpp>
#include <string>
#include <cstring>

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

protected:
    ModelListener* modelListener;
    uint32_t counter;
    uint32_t price;
    uint32_t _totalPrice;
    uint16_t imageCode;
    int textID;
};

#endif // MODEL_HPP
