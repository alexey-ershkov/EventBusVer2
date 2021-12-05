//
// Created by a.ershkov on 05.12.2021.
//

#ifndef EVENTBUS2_ISUBSCRIBER_H
#define EVENTBUS2_ISUBSCRIBER_H

#include "Event.h"

class ISubscriber {
public:
    virtual bool can_handle(Event event) = 0;
    virtual void handle(Event event) = 0;
};

#endif //EVENTBUS2_ISUBSCRIBER_H
