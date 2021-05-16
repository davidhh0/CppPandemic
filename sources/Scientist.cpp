
#include <iostream>
#include <stdexcept>
using namespace std;
#include "Scientist.hpp"
#include "Board.hpp"
namespace pandemic{
    Player& Scientist::discover_cure (const Color& color){
        //TODO
        // A cure was discovered for currentCity.color
        // if(myBoard.isDiscoveredCure[color] == true){
        //     return *this;
        // }

        //There is a TM in currentCity
        if(!myBoard.hm.at(currentCity).TM){
            throw std::invalid_argument("There is not a research station in "+pandemic::Board::enumToString(currentCity));
        }
        
        set<City>::iterator it = myCards.begin();
        set<City> takenCards;
        int countCards=0;
        
        
        for(;it!=myCards.end() && countCards!=_n ; it++){
            City c = *it;
            if(myBoard.hm.at(c).color == color){
                countCards++;
                takenCards.insert(*it);
            }
        }
        
        if(countCards!=_n){
                throw std::invalid_argument("There is not enough cards for Scientist");
        }
        set<City>::iterator it2 = takenCards.begin();
        for(;it2!=takenCards.end() ; it2++){
            myCards.erase(*it2);
        }
        myBoard.isDiscoveredCure.at(color) = true;

        return *this;
    } 
    string Scientist::role(){
        return "Scientist" ;
    }
    Scientist::Scientist(Board &b,City c,int n) : Player(b,c) {
        if(n<0){
            throw std::invalid_argument("N cannot be negative!");
        }
        _n=n;
    }

};