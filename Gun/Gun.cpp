//
// Created by a.ershkov on 05.12.2021.
//

#include <iostream>
#include "Gun.h"

Gun::Gun() {
    name = "Noob Gun";
    damage = 1;
}

std::string Gun::get_name() {
    return name;
}

int Gun::get_damage() const {
    return damage;
}

void Gun::set_name(const std::string& new_name) {
    if (new_name == "Cool Gun") {
        damage = 10;
        name = new_name;
        return;
    }

    damage = 1;
    name = "Noob Gun";
}

void Gun::shoot() const {
    std::cout << "Gun with name " << name << " shooted with damage " << damage << std::endl;
}
