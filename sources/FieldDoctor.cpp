#include <iostream>
#include <stdexcept>
#include "FieldDoctor.hpp"
#include "Board.hpp"
using namespace std;

namespace pandemic{

    Player& FieldDoctor::treat(const City& city){
        //TODO
        if(city==currentCity){
            Player::treat(city);
        }
        else if(myBoard.hm.at(currentCity).citysConnected.count(city) == 1){

            if(myBoard.hm.at(city).diseaseLevel == 0){
              throw std::invalid_argument("Disease level is 0!");
             }
            Color citysColor = myBoard.hm.at(city).color;
            myBoard.hm.at(city).diseaseLevel = myBoard.isDiscoveredCure.at(citysColor)?0:(myBoard.hm.at(city).diseaseLevel-1);

        }
        else{
            throw std::invalid_argument("FieldDoctor couldn't treat" + pandemic::Board::enumToString(city));
        }

        return *this;
    }
    string FieldDoctor::role(){
        return "FieldDoctor";
    }
    FieldDoctor::FieldDoctor(Board &b,City c) : Player(b,c) {
        //TODO
    }

};