//
// Created by a.ershkov on 05.12.2021.
//

#ifndef EVENTBUS2_GUN_H
#define EVENTBUS2_GUN_H


#include <string>

class Gun {
public:
    Gun();
    void set_name(const std::string& new_name);
    std::string get_name();
    int get_damage() const;
    void shoot() const;
private:
    std::string name;
    int damage;
};


#endif //EVENTBUS2_GUN_H
