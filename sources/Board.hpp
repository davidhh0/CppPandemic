#pragma once
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "Player.hpp"
#include <stdexcept>
#include <set>
using namespace std;
namespace pandemic{
    

class box{
    public:
        box();
        bool TM;
        const Color color;
        int diseaseLevel;
        set<City> citysConnected;
        box(const Color c,vector<City> const &connected);    
        
};

class Board
{

public:
    map<City,box> hm;
    map<Color,bool> isDiscoveredCure;
    static string enumToString(const City);
    void remove_cures();
    ~Board(){}
    Board();
    void buildHM();
    void remove_stations(){
        map<City,box>::iterator it = hm.begin();
        for(;it!=hm.end() ; it++){
            it->second.TM=false;
        }
    }
    friend ostream& operator<<(ostream& os, const Board& board);
    int& operator[](const City& city){
        return hm.at(city).diseaseLevel;
    }
    bool is_clean(){
        map<City,box>::iterator it = hm.begin();
        for(;it!=hm.end();it++){
            if(it->second.diseaseLevel!=0){
                return false;
            }
        }
        return true;
    }
    
};



};