#include <iostream>
#include "EventBus/Event.h"
#include "EventBus/EventBus.h"
#include "User/User.h"

int main() {
    EventBus bus;
    User user(1);
    User user2(2);
    bus.add_sub(&user);
    bus.add_sub(&user2);

    std::cout << user.coords[0] << " " << user.coords[1] << std::endl;

    Event event;
    event.type = move;
    event.data = UserMovedData{.id = 1,.x = 10, .y = 5};

    bus.dispatch(event);

    user.gun.set_name("Cool Gun");

    event.type = shoot;
    event.data = UserShootData{.user_id = 1, .gun_name = "Noob Gun"};
    bus.dispatch(event);

    std::cout << user.coords[0] << " " << user.coords[1] << " with gun named " << user.gun.get_name() << std::endl;
    return 0;
}
