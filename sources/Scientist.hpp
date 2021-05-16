#pragma once
#include <string>
#include <vector>
#include "Player.hpp"

namespace pandemic{
class Scientist: public Player{
    private:
        int _n;

    public:
        Scientist(Board &b,City c,int n=4);
        Player& discover_cure (const Color&);
        string role();

};
};