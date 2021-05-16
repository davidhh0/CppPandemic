#pragma once
#include <string>
#include <vector>
#include "Player.hpp"
#include "Board.hpp"
namespace pandemic{
/*
    If there is a tahanat mehkar in the position
    of the player, he can use fly_direct to where ever he wants.

*/

class Dispatcher: public Player{
    public:
        Player& fly_direct(const City&);
        string role();
        Dispatcher(Board &b,City c);

};
};