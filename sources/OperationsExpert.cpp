
#include <iostream>
#include <stdexcept>
#include "OperationsExpert.hpp"
#include "Board.hpp"
using namespace std;
namespace pandemic{

    Player& OperationsExpert::build(){
        //TODO
        myBoard.hm.at(currentCity).TM=true;
        
        return *this;
    }

    string OperationsExpert::role(){
        return "OperationsExpert" ;
    }

};