#include <iostream>
#include <stdexcept>
#include "Medic.hpp"
#include "Board.hpp"
using namespace std;

namespace pandemic{

    Player& Medic::treat(const City& city) {
        //TODO
        if(myBoard.hm.at(currentCity).diseaseLevel == 0){
            throw std::invalid_argument("Disease level is 0!");
        }
        myBoard.hm.at(currentCity).diseaseLevel=0;
        return *this;
    }
    Player& Medic::fly_direct(const City& city) {
        //TODO
        Player::fly_direct(city);
        myBoard.hm.at(city).diseaseLevel = (myBoard.isDiscoveredCure.at(myBoard.hm.at(city).color))?0:myBoard.hm.at(city).diseaseLevel;
        return *this;
    }
    Player& Medic::drive(const City& city){
        //TODO
        Player::drive(city);
        myBoard.hm.at(city).diseaseLevel = (myBoard.isDiscoveredCure.at(myBoard.hm.at(city).color))?0:myBoard.hm.at(city).diseaseLevel;
        return *this;
    }
    Player& Medic::fly_charter(const City& city) {
        //TODO
        Player::fly_charter(city);
        myBoard.hm.at(city).diseaseLevel = (myBoard.isDiscoveredCure.at(myBoard.hm.at(city).color))?0:myBoard.hm.at(city).diseaseLevel;
        return *this;
    }
    Player& Medic::fly_shuttle(const City& city){
        //TODO
        Player::fly_shuttle(city);
        myBoard.hm.at(city).diseaseLevel = (myBoard.isDiscoveredCure.at(myBoard.hm.at(city).color))?0:myBoard.hm.at(city).diseaseLevel;
        return *this;
    }
    string Medic::role(){
        return "Medic";
    }
    Medic::Medic(Board &b,City c) : Player(b,c){
        //TODO

    }

};