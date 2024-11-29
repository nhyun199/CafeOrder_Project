/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDAPPLICATIONBASE_HPP
#define FRONTENDAPPLICATIONBASE_HPP

#include <mvp/MVPApplication.hpp>
#include <gui/model/Model.hpp>

class FrontendHeap;

class FrontendApplicationBase : public touchgfx::MVPApplication
{
public:
    FrontendApplicationBase(Model& m, FrontendHeap& heap);
    virtual ~FrontendApplicationBase() { }

    virtual void changeToStartScreen()
    {
        gotoINTROScreenNoTransition();
    }

    // INTRO
    void gotoINTROScreenNoTransition();

    // MAIN
    void gotoMAINScreenNoTransition();

    void gotoMAINScreenWipeTransitionEast();

    // ORDER
    void gotoORDERScreenNoTransition();

protected:
    touchgfx::Callback<FrontendApplicationBase> transitionCallback;
    FrontendHeap& frontendHeap;
    Model& model;

    // INTRO
    void gotoINTROScreenNoTransitionImpl();

    // MAIN
    void gotoMAINScreenNoTransitionImpl();

    void gotoMAINScreenWipeTransitionEastImpl();

    // ORDER
    void gotoORDERScreenNoTransitionImpl();
};

#endif // FRONTENDAPPLICATIONBASE_HPP
