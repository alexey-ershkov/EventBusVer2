//
// Created by a.ershkov on 05.12.2021.
//

#ifndef EVENTBUS2_EVENT_H
#define EVENTBUS2_EVENT_H

#include <vector>
#include <string>
#include <variant>

struct UserMovedData {
    int id;
    int x;
    int y;
};

struct UserShootData {
    int user_id;
    std::string gun_name;
};

enum Type {
    move,
    shoot
};

struct Event {
    Type type;
    std::variant<UserShootData, UserMovedData> data;
};

#endif //EVENTBUS2_EVENT_H
