#ifndef AUTOPILOT_PITCHPOWERMANAGEMENT_IDLETHROTTLESTATE_HPP_
#define AUTOPILOT_PITCHPOWERMANAGEMENT_IDLETHROTTLESTATE_HPP_

#include <src/StateMachine/StateMachine.hpp>

class IdleThrottleState : public IState
{
public:
    void onEnter() override;
    void onExit() override;
    void onEvent(IEvent& event) override;
private:
}

#endif