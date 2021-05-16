#include <iostream>
#include <stdexcept>
#include "Virologist.hpp"
#include "Board.hpp"
using namespace std;

namespace pandemic{

    Player& Virologist::treat(const City& city){
        //TODO

        if(city!=currentCity){
            if(myCards.count(city)!=0){
            if(myBoard.hm.at(city).diseaseLevel == 0){
                throw std::invalid_argument("Disease level is 0!");
            }
            Color citysColor = myBoard.hm.at(city).color;
            myBoard.hm.at(city).diseaseLevel = myBoard.isDiscoveredCure.at(citysColor)?0:(myBoard.hm.at(city).diseaseLevel-1);
            myCards.erase(city);
            }
            else{
                throw std::invalid_argument("Virologist doesn't hold the required card!");
            }
        }
        else{ // city == currentCity
            Player::treat(city);
        }
        return *this;
    }
    Virologist::Virologist(Board &b,City c) : Player(b,c){
        //TODO
    }
    string Virologist::role(){
        return "Virologist" ;
    }

};