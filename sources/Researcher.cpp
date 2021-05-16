#include <iostream>
#include <stdexcept>
#include "Board.hpp"
using namespace std;
const int numberOfRequiredCards = 5;
#include "Researcher.hpp"
namespace pandemic{
    Player& Researcher::discover_cure(const Color& color){
        //TODO

        if(myBoard.isDiscoveredCure.at(myBoard.hm.at(currentCity).color)){
            return *this;
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
                throw std::invalid_argument("There is not enough cardsXXX");
        }
        set<City>::iterator it2 = takenCards.begin();
        for(;it2!=takenCards.end() ; it2++){
            myCards.erase(*it2);
        }
        myBoard.isDiscoveredCure.at(color) = true;


        return *this;
    }

    string Researcher::role(){
        return "Researcher" ;
    }

    Researcher::Researcher(Board &b,City c) : Player(b,c){
        //TODO
    }
};