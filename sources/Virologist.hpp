#pragma once
#include <string>
#include <vector>
#include "Player.hpp"
namespace pandemic{
class Virologist: public Player{
    public:
        Player& treat(const City&);
        string role();
        Virologist(Board &b,City c);

};
};