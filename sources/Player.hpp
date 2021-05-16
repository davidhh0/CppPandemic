#pragma once
#include <string>
#include <vector>
#include "City.hpp"
#include "Color.hpp"
#include <set>
namespace pandemic {
class Board;


class Player
{
    
protected:
    set<City> myCards;
    Board& myBoard;
    City currentCity;
public:
    Player(Board &b,City c);
    virtual string role();
    Player& take_card(const City&);
    virtual Player& drive(const City&);
    virtual Player& fly_direct(const City&);
    virtual Player& fly_charter(const City&);
    virtual Player& fly_shuttle(const City&);
    virtual Player& build();
    virtual Player& discover_cure (const Color&);
    virtual Player& treat(const City&);
    void remove_cards(){
        myCards.clear();
    }
    ~Player();
};


};
