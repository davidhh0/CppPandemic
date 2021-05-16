
#include <iostream>
#include "Dispatcher.hpp"
#include <stdexcept>
#include "Board.hpp"
using namespace std;

namespace pandemic{
    Dispatcher::Dispatcher(Board &b,City c) : Player(b,c){
        //TODO

    }
    string Dispatcher::role(){
        return "Dispatcher" ;
    }
    Player& Dispatcher::fly_direct(const City& city){
        //TODO
        if(city == currentCity){
            throw std::invalid_argument("Can't fly to the same city!");
        }
        if(myBoard.hm.at(currentCity).TM){
            
            currentCity = city;
        }
        else{
            Player::fly_direct(city);
        }
        return *this;
    }


};