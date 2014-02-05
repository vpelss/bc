#ifndef __MYEVENTRECEIVER_HPP_INCLUDED__
#define __MYEVENTRECEIVER_HPP_INCLUDED__

#include "irrlicht.h"

#include "GUIMain.hpp"
#include "SimulationModel.hpp"

class MyEventReceiver : public irr::IEventReceiver
{
public:

    MyEventReceiver(SimulationModel* mdl, GUIMain* gui);

    virtual bool OnEvent(const irr::SEvent& event);
    virtual irr::s32 GetScrollBarPosSpeed() const;
    virtual irr::s32 GetScrollBarPosHeading() const;

private:

    SimulationModel* model;
    GUIMain* guiMain;
    irr::s32 scrollBarPosSpeed;
    irr::s32 scrollBarPosHeading;

};

#endif