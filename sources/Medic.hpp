#pragma once
#include <string>
#include <vector>
#include "Player.hpp"

/*
    When using treat() -> it zeros the city
    When a Medic arrives at a city marked with Color C
    and for C a cure was discovered, it automatically 
    zeros the city.

*/
namespace pandemic{
class Medic: public Player{
    public:
        Player& treat(const City&);
        Player& fly_direct(const City&);
        Player& drive(const City&);
        Player& fly_charter(const City&);
        Player& fly_shuttle(const City&);
        string role();
        Medic(Board &b,City c);

};
};