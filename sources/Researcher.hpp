#pragma once
#include <string>
#include <vector>
#include "Player.hpp"


/*
    NO need to be in a city that has a T.M.
    in order to build_cure.
*/
namespace pandemic{
class Researcher: public Player{
    public:
        Player& discover_cure(const Color&);
        string role();
        Researcher(Board &b,City c);

};
};