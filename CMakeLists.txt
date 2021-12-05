cmake_minimum_required(VERSION 3.20)
project(EventBus2)

set(CMAKE_CXX_STANDARD 17)

add_executable(EventBus2 main.cpp EventBus/ISubscriber.h EventBus/Event.h EventBus/EventBus.cpp EventBus/EventBus.h User/User.cpp User/User.h Gun/Gun.cpp Gun/Gun.h)
