//
// Created by a.ershkov on 05.12.2021.
//

#include <iostream>
#include "User.h"

User::User(int constructor_id) {
    id = constructor_id;
    coords = {0, 0};
    gun = Gun();
}

bool User::can_handle(Event event) {
    if (event.type == move) {
        return true;
    }

    if (event.type == shoot) {
        return true;
    }

    return false;
}

void User::handle(Event event) {
    if (event.type == move) {
        try {
           auto movedData =  std::get<UserMovedData>(event.data);
           if (movedData.id == id) {
               coords[0] = movedData.x;
               coords[1] = movedData.y;
           }
        } catch (std::exception &ex) {
            std::cout <<  "Can't access to event data user moved" << std::endl;
        }
    }

    if (event.type == shoot) {
        try {
            auto shootData =  std::get<UserShootData>(event.data);
            if (shootData.user_id == id && shootData.gun_name == gun.get_name()) {
                gun.shoot();
            }
        } catch (std::exception &ex) {
            std::cout <<  "Can't access to event data user shoot" << std::endl;
        }
    }
}

