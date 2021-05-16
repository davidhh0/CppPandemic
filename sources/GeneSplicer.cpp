#include <iostream>
#include <stdexcept>
#include "GeneSplicer.hpp"
#include "Board.hpp"
const int numberOfRequiredCards = 5;
using namespace std;


namespace pandemic{
    Player& GeneSplicer::discover_cure (const Color& color){
        //TODO
        if(!myBoard.hm.at(currentCity).TM){
            throw std::invalid_argument("There is not a research statin in "+pandemic::Board::enumToString(currentCity));
        }
        set<City>::iterator it = myCards.begin();
        set<City> takenCards;
        int countCards=0;
        for(;it!=myCards.end() && countCards!=numberOfRequiredCards ; it++){
            countCards++;
            takenCards.insert(*it);
        }
        if(countCards!=numberOfRequiredCards){
            throw std::invalid_argument("There is not enough cards for GeneSplicer!");
        }
        set<City>::iterator it2 = takenCards.begin();
        for(;it2!=takenCards.end() ; it2++){
            myCards.erase(*it2);
        }
        myBoard.isDiscoveredCure.at(color) = true;
        return *this;
    }
    string GeneSplicer::role(){
        return "GeneSplicer" ;
    }
    GeneSplicer::GeneSplicer(Board &b,City c) : Player(b,c){
        //TODO
    }


};