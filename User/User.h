//
// Created by a.ershkov on 05.12.2021.
//

#ifndef EVENTBUS2_USER_H
#define EVENTBUS2_USER_H

#include <vector>
#include "../Gun/Gun.h"
#include "../EventBus/ISubscriber.h"
#include "../EventBus/Event.h"


class User : public ISubscriber{
public:
    User(int id);
    std::vector<int> coords;
    int id;
    Gun gun;
    bool can_handle(Event event) override;
    void handle(Event event) override;
};


#endif //EVENTBUS2_USER_H
