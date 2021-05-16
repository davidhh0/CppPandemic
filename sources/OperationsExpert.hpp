#pragma once
#include <string>
#include <vector>
#include "Player.hpp"
#include "Board.hpp"
/*
    No need to throw a card in order to build !!
*/
namespace pandemic{

class OperationsExpert : public Player{
    public:
        Player& build();
        OperationsExpert(Board &b,City c) : Player(b,c){}
        string role();
        ~OperationsExpert(){}
};

};