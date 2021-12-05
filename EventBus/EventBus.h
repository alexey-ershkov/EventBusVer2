//
// Created by a.ershkov on 05.12.2021.
//

#ifndef EVENTBUS2_EVENTBUS_H
#define EVENTBUS2_EVENTBUS_H


#include "Event.h"
#include "ISubscriber.h"

class EventBus {
public:
    void dispatch(Event event);
    void add_sub(ISubscriber *sub);

private:
    std::vector<ISubscriber*> subs;
};


#endif //EVENTBUS2_EVENTBUS_H
