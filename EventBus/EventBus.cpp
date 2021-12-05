//
// Created by a.ershkov on 05.12.2021.
//

#include "EventBus.h"

void EventBus::add_sub(ISubscriber *sub) {
    subs.push_back(sub);
}

void EventBus::dispatch(Event event) {
    for (auto sub: subs) {
        if (sub->can_handle(event)) {
            sub->handle(event);
        }
    }
}
