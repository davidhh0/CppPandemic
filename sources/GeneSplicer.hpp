#pragma once
#include <string>
#include <vector>
#include "Player.hpp"
namespace pandemic{
/*
    Can cure a disease in the city where she is
    for ANY 5 cards
*/

class GeneSplicer: public Player{
    public:
        Player& discover_cure (const Color&);
        string role();
        GeneSplicer(Board &b,City c);

};


};