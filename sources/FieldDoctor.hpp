#pragma once
#include <string>
#include <vector>

#include "Player.hpp"
/*
    Can treat any city that is connected to the one he is on
    and NOT throwing a card.

*/
namespace pandemic{
    class FieldDoctor: public Player{
        public:
            Player& treat(const City&);
            FieldDoctor(Board &b,City c);
            string role();
    };


};