#include "Player.hpp"
#include <iostream>
#include <stdexcept>
#include "Board.hpp"
#include <algorithm>
const int numberOfRequiredCards = 5;
using namespace std;

namespace pandemic{

    Player& Player::take_card(const City& city){
        // TODO
        if(myCards.count(city) == 0){
            myCards.insert(city);
        }
        return *this;
    }

    Player& Player::drive(const City& city){
        //TODO
        //Varify that the currentCity is connected to city
        if(myBoard.hm.at(currentCity).citysConnected.count(city) == 1){
            currentCity = city;
        }
        else{
            throw std::invalid_argument(pandemic::Board::enumToString(currentCity) + " and "+pandemic::Board::enumToString(city)+ "are not connected!");
        }
        return *this;
    }

    Player& Player::fly_direct(const City& city){
        //TODO
        if(city == currentCity){
            throw std::invalid_argument("Can't fly to the same city!");
        }
        // Flying to city and myCards should contains city
        if (myCards.count(city)==1){
            currentCity = city;
            myCards.erase(city);
        
        }
        else{
            throw std::invalid_argument("The player has not "+pandemic::Board::enumToString(city) + " card");
        }
        return *this;
    }


    Player& Player::fly_charter(const City& city){
        //TODO
        if (myCards.count(currentCity)==1){
            myCards.erase(currentCity);
            currentCity = city;
            
            
            
        }
        else{
            throw std::invalid_argument("The player has not the "+pandemic::Board::enumToString(currentCity) +  " card!");
        }
        return *this;
    }

    Player& Player::fly_shuttle(const City& city){
        if(city == currentCity){
            throw std::invalid_argument("Can't fly to the same city!");
        }
        //Checking if currentCity has TM && city has TM
        if(myBoard.hm.at(currentCity).TM && myBoard.hm.at(city).TM){
            currentCity = city;
            
        }
        else{
            throw std::invalid_argument("One/Both of the cities has not research stations");
        }
        return *this;
    }

    Player& Player::build(){
        //TODO
        //Checking that there is NOT TM in currentCity && myCards holds currentCity
        if(myBoard.hm.at(currentCity).TM){
            return *this;
        }
        if(!(myBoard.hm.at(currentCity).TM) && myCards.count(currentCity) == 1){
            myBoard.hm.at(currentCity).TM = true;
            myCards.erase(currentCity);
        }
        else{
            throw std::invalid_argument("There is a research station already or the player has not the required card");
        }


        return *this;
    }

    Player& Player::discover_cure (const Color& color){
        //TODO
        
        
        if(!myBoard.hm.at(currentCity).TM){
            throw std::invalid_argument("There is not a research station in " + pandemic::Board::enumToString(currentCity));
        } 
        set<City>::iterator it = myCards.begin();
        set<City> takenCards;
        int countCards=0;
        
        for(;it!=myCards.end() && countCards!=numberOfRequiredCards ; it++){
            City c = *it;
            if(myBoard.hm.at(c).color == color){
                countCards++;
                takenCards.insert(*it);
            }
        }
        if(countCards!=numberOfRequiredCards){
                throw std::invalid_argument("There is not enough cards for Player");
        }

        set<City>::iterator it2 = takenCards.begin();
        for(;it2!=takenCards.end() ; it2++){
            myCards.erase(*it2);
        }
        myBoard.isDiscoveredCure.at(color) = true;
        return *this;
    }
    

    Player& Player::treat(const City& city){
        //TODO
        if(currentCity!=city){
            throw std::invalid_argument("Player is not in " + pandemic::Board::enumToString(city));
        }
        if(myBoard.hm.at(city).diseaseLevel == 0){
            throw std::invalid_argument("Disease level is 0!");
        }
        
        Color citysColor = myBoard.hm.at(city).color;
        myBoard.hm.at(city).diseaseLevel = myBoard.isDiscoveredCure.at(citysColor)?0:(myBoard.hm.at(city).diseaseLevel-1);
        return *this;
    }
    string Player::role(){
        return "Normal Player";
    }
    Player::Player(Board &b,City c): myBoard(b),currentCity(c)  { 
        //TODO
        
    }

    Player::~Player(){
        
    }

};