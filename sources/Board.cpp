#include <iostream>
#include <stdexcept>
#include "Board.hpp"
#include "Player.hpp"
const int numberOfSpaces = 11;
using namespace std;
namespace pandemic{
string enumToString(const City city){
        switch (city)
        {
        case City::SanFrancisco :
            return "SanFrancisco";
            break;
        case City::Chicago :
            return "Chicago";
            break;    
        case City::Montreal :
            return "Montreal";
            break; 
        case City::NewYork :
            return "NewYork";
            break; 
        case City::Atlanta :
            return "Atlanta";
            break; 
        case City::Washington :
            return "Washington";
            break;
            case City::Madrid :
            return "Madrid";
            break;
        case City::London :
            return "London";
            break;    
        case City::Essen :
            return "Essen";
            break; 
        case City::Milan :
            return "Milan";
            break; 
        case City::Paris :
            return "Paris";
            break; 
        case City::StPetersburg :
            return "StPetersburg";
            break;             
        
        
        
        case City::LosAngeles :
            return "LosAngeles";
            break;
        case City::MexicoCity :
            return "MexicoCity";
            break;    
        case City::Miami :
            return "Miami";
            break; 
        case City::Bogota :
            return "Bogota";
            break; 
        case City::Lima :
            return "Lima";
            break; 
        case City::Santiago :
            return "Santiago";
            break;
            case City::BuenosAires :
            return "BuenosAires";
            break;
        case City::SaoPaulo :
            return "SaoPaulo";
            break;    
        case City::Lagos :
            return "Lagos";
            break; 
        case City::Khartoum :
            return "Khartoum";
            break; 
        case City::Kinshasa :
            return "Kinshasa";
            break; 
        case City::Johannesburg :
            return "Johannesburg";
            break;  
        
        
        case City::Moscow :
            return "Moscow";
            break;
        case City::Istanbul :
            return "Istanbul";
            break;    
        case City::Algiers :
            return "Algiers";
            break; 
        case City::Cairo :
            return "Cairo";
            break; 
        case City::Baghdad :
            return "Baghdad";
            break; 
        case City::Tehran :
            return "Tehran";
            break;
            case City::Delhi :
            return "Delhi";
            break;
        case City::Riyadh :
            return "Riyadh";
            break;    
        case City::Karachi :
            return "Karachi";
            break; 
        case City::Kolkata :
            return "Kolkata";
            break; 
        case City::Mumbai :
            return "Mumbai";
            break; 
        case City::Chennai :
            return "Chennai";
            break;  
        

        case City::Beijing :
            return "Beijing";
            break;
        case City::Shanghai :
            return "Shanghai";
            break;    
        case City::Seoul :
            return "Seoul";
            break; 
        case City::Tokyo :
            return "Tokyo";
            break; 
        case City::Osaka :
            return "Osaka";
            break; 
        case City::Taipei :
            return "Taipei";
            break;
        case City::HongKong :
            return "HongKong";
            break;
        case City::Bangkok :
            return "Bangkok";
            break;    
        case City::Manila :
            return "Manila";
            break; 
        case City::Jakarta :
            return "Jakarta";
            break; 
        case City::HoChiMinhCity :
            return "HoChiMinhCity";
            break; 
        case City::Sydney :
            return "Sydney";
            break;  
        
        
        
        default:
            return "NO SUCH CITY";
            break;
        }
        
    }
   
string Board::enumToString(const City city){
        switch (city)
        {
        case City::SanFrancisco :
            return "SanFrancisco";
            break;
        case City::Chicago :
            return "Chicago";
            break;    
        case City::Montreal :
            return "Montreal";
            break; 
        case City::NewYork :
            return "NewYork";
            break; 
        case City::Atlanta :
            return "Atlanta";
            break; 
        case City::Washington :
            return "Washington";
            break;
            case City::Madrid :
            return "Madrid";
            break;
        case City::London :
            return "London";
            break;    
        case City::Essen :
            return "Essen";
            break; 
        case City::Milan :
            return "Milan";
            break; 
        case City::Paris :
            return "Paris";
            break; 
        case City::StPetersburg :
            return "StPetersburg";
            break;             
        
        
        
        case City::LosAngeles :
            return "LosAngeles";
            break;
        case City::MexicoCity :
            return "MexicoCity";
            break;    
        case City::Miami :
            return "Miami";
            break; 
        case City::Bogota :
            return "Bogota";
            break; 
        case City::Lima :
            return "Lima";
            break; 
        case City::Santiago :
            return "Santiago";
            break;
            case City::BuenosAires :
            return "BuenosAires";
            break;
        case City::SaoPaulo :
            return "SaoPaulo";
            break;    
        case City::Lagos :
            return "Lagos";
            break; 
        case City::Khartoum :
            return "Khartoum";
            break; 
        case City::Kinshasa :
            return "Kinshasa";
            break; 
        case City::Johannesburg :
            return "Johannesburg";
            break;  
        
        
        case City::Moscow :
            return "Moscow";
            break;
        case City::Istanbul :
            return "Istanbul";
            break;    
        case City::Algiers :
            return "Algiers";
            break; 
        case City::Cairo :
            return "Cairo";
            break; 
        case City::Baghdad :
            return "Baghdad";
            break; 
        case City::Tehran :
            return "Tehran";
            break;
            case City::Delhi :
            return "Delhi";
            break;
        case City::Riyadh :
            return "Riyadh";
            break;    
        case City::Karachi :
            return "Karachi";
            break; 
        case City::Kolkata :
            return "Kolkata";
            break; 
        case City::Mumbai :
            return "Mumbai";
            break; 
        case City::Chennai :
            return "Chennai";
            break;  
        

        case City::Beijing :
            return "Beijing";
            break;
        case City::Shanghai :
            return "Shanghai";
            break;    
        case City::Seoul :
            return "Seoul";
            break; 
        case City::Tokyo :
            return "Tokyo";
            break; 
        case City::Osaka :
            return "Osaka";
            break; 
        case City::Taipei :
            return "Taipei";
            break;
        case City::HongKong :
            return "HongKong";
            break;
        case City::Bangkok :
            return "Bangkok";
            break;    
        case City::Manila :
            return "Manila";
            break; 
        case City::Jakarta :
            return "Jakarta";
            break; 
        case City::HoChiMinhCity :
            return "HoChiMinhCity";
            break; 
        case City::Sydney :
            return "Sydney";
            break;  
        
        
        
        default:
            return "NO SUCH CITY";
            break;
        }
        
    }

string enumToColor(Color color){
    switch (color)
    {
    case Color::Red:
        return "Red";
        break;
    case Color::Yellow:
        return "Yellow";
    case Color::Blue:
        return "Blue";
    case Color::Black:
        return "Black";        
    default:
        break;
    }
}
box::box(const Color c,vector<City> const &connected) : color(c) {
            TM = false;
            diseaseLevel=0;
            for(City run:connected){
                citysConnected.insert(run);
            }
}


Board::Board(){
    buildHM();
}

ostream& operator<<(ostream& os, const Board& board){
    os<<"Pandemic Board: 48 cities "<<endl;
    map<City,box>::const_iterator it = board.hm.begin();
    int totalDisease = 0;
    for(;it!=board.hm.end();it++){
        string city =  enumToString(it->first);
        Color color = it->second.color;
        int level = it->second.diseaseLevel;
        totalDisease+=level;
        string spaces = city.size()>numberOfSpaces?"":"\t";
        if(color==Color::Red){
            os<<"\x1B[31mThe city:   "<<city<<"\t"<<spaces << "has "<<level<<" disease level\033[0m"<<endl;
        }
        else if(color==Color::Blue){
            os<<"\x1B[34mThe city:   "<<city<<"\t"<<spaces << "has "<<level<<" disease level\033[0m"<<endl;
        }
        else if(color==Color::Yellow){
            os<<"\x1B[33mThe city:   "<<city<<"\t"<<spaces << "has "<<level<<" disease level\033[0m"<<endl;
        }
        else{
            os<<"\x1B[90mThe city:   "<<city<<"\t"<<spaces << "has "<<level<<" disease level\033[0m"<<endl;
        }
    }
    //printf("\x1B[31mTexting\033[0m\t\t");

    os<<"Total disease level on the Board is: "<<totalDisease<<endl;


    return os;
}

void Board::buildHM(){

    isDiscoveredCure[Color::Black] = false;
    isDiscoveredCure[Color::Blue] = false;
    isDiscoveredCure[Color::Yellow] = false;
    isDiscoveredCure[Color::Red] = false;

    // ~~~~~~~~~~~~~~~~BLUE~~~~~~~~~~~~~~~~
    hm.insert(make_pair<City,box>(City::SanFrancisco,box{Color::Blue,vector<City>{City::Chicago,City::LosAngeles,City::Tokyo,City::Manila}}));
    hm.insert(make_pair<City,box>(City::Chicago,box(Color::Blue,vector<City>{City::SanFrancisco,City::Atlanta,City::LosAngeles,City::MexicoCity,City::Montreal})));
    hm.insert(make_pair<City,box>(City::Montreal,box(Color::Blue,vector<City>{City::Chicago,City::NewYork,City::Washington})));
    hm.insert(make_pair<City,box>(City::NewYork,box(Color::Blue,vector<City>{City::Montreal,City::Washington,City::Madrid,City::London})));
    hm.insert(make_pair<City,box>(City::London,box(Color::Blue,vector<City>{City::NewYork,City::Madrid,City::Paris,City::Essen})));
    hm.insert(make_pair<City,box>(City::Atlanta,box(Color::Blue,vector<City>{City::Chicago,City::Washington,City::Miami})));
    hm.insert(make_pair<City,box>(City::Washington,box(Color::Blue,vector<City>{City::Miami,City::Atlanta,City::Montreal,City::NewYork})));
    hm.insert(make_pair<City,box>(City::Madrid,box(Color::Blue,vector<City>{City::NewYork,City::Algiers,City::Paris,City::London,City::SaoPaulo})));
    hm.insert(make_pair<City,box>(City::Paris,box(Color::Blue,vector<City>{City::Madrid,City::Algiers,City::Milan,City::Essen,City::London})));
    hm.insert(make_pair<City,box>(City::Essen,box(Color::Blue,vector<City>{City::London,City::Paris,City::Milan,City::StPetersburg})));
    hm.insert(make_pair<City,box>(City::Milan,box(Color::Blue,vector<City>{City::Istanbul,City::Paris,City::Essen})));
    hm.insert(make_pair<City,box>(City::StPetersburg,box(Color::Blue,vector<City>{City::Essen,City::Istanbul,City::Moscow})));
    //~~~~~~~~~~~~~~~~/BLUE~~~~~~~~~~~~~~~~

    //~~~~~~~~~~~~~~~~YELLOW~~~~~~~~~~~~~~~~
    hm.insert(make_pair<City,box>(City::LosAngeles,box(Color::Yellow,vector<City>{City::SanFrancisco,City::MexicoCity,City::Chicago,City::Sydney})));
    hm.insert(make_pair<City,box>(City::MexicoCity,box(Color::Yellow,vector<City>{City::LosAngeles,City::Chicago,City::Miami,City::Bogota,City::Lima})));
    hm.insert(make_pair<City,box>(City::Miami,box(Color::Yellow,vector<City>{City::Washington,City::Atlanta,City::MexicoCity,City::Bogota})));
    hm.insert(make_pair<City,box>(City::Bogota,box(Color::Yellow,vector<City>{City::Miami,City::MexicoCity,City::Lima,City::SaoPaulo,City::BuenosAires})));
    hm.insert(make_pair<City,box>(City::Lima,box(Color::Yellow,vector<City>{City::MexicoCity,City::Bogota,City::Santiago})));
    hm.insert(make_pair<City,box>(City::SaoPaulo,box(Color::Yellow,vector<City>{City::Bogota,City::Madrid,City::Lagos,City::BuenosAires})));
    hm.insert(make_pair<City,box>(City::Santiago,box(Color::Yellow,vector<City>{City::Lima})));
    hm.insert(make_pair<City,box>(City::BuenosAires,box(Color::Yellow,vector<City>{City::SaoPaulo,City::Bogota})));
    hm.insert(make_pair<City,box>(City::Lagos,box(Color::Yellow,vector<City>{City::SaoPaulo,City::Kinshasa,City::Khartoum})));
    hm.insert(make_pair<City,box>(City::Kinshasa,box(Color::Yellow,vector<City>{City::Lagos,City::Khartoum,City::Johannesburg})));
    hm.insert(make_pair<City,box>(City::Khartoum,box(Color::Yellow,vector<City>{City::Cairo,City::Lagos,City::Kinshasa,City::Johannesburg})));
    hm.insert(make_pair<City,box>(City::Johannesburg,box(Color::Yellow,vector<City>{City::Kinshasa,City::Khartoum})));
    //~~~~~~~~~~~~~~~~/YELLOW~~~~~~~~~~~~~~~~


    //~~~~~~~~~~~~~~~~BLACK~~~~~~~~~~~~~~~~
    hm.insert(make_pair<City,box>(City::Algiers,box(Color::Black,vector<City>{City::Madrid,City::Paris,City::Istanbul,City::Cairo})));
    hm.insert(make_pair<City,box>(City::Cairo,box(Color::Black,vector<City>{City::Algiers,City::Istanbul,City::Baghdad,City::Riyadh,City::Khartoum})));
    hm.insert(make_pair<City,box>(City::Istanbul,box(Color::Black,vector<City>{City::Milan,City::Moscow,City::Baghdad,City::Cairo,City::Algiers,City::StPetersburg})));
    hm.insert(make_pair<City,box>(City::Baghdad,box(Color::Black,vector<City>{City::Istanbul,City::Cairo,City::Riyadh,City::Tehran,City::Karachi})));
    hm.insert(make_pair<City,box>(City::Moscow,box(Color::Black,vector<City>{City::Tehran,City::StPetersburg,City::Istanbul})));
    hm.insert(make_pair<City,box>(City::Tehran,box(Color::Black,vector<City>{City::Moscow,City::Baghdad,City::Karachi,City::Delhi})));
    hm.insert(make_pair<City,box>(City::Riyadh,box(Color::Black,vector<City>{City::Cairo,City::Baghdad,City::Karachi})));
    hm.insert(make_pair<City,box>(City::Karachi,box(Color::Black,vector<City>{City::Riyadh,City::Mumbai,City::Delhi,City::Baghdad,City::Tehran})));
    hm.insert(make_pair<City,box>(City::Delhi,box(Color::Black,vector<City>{City::Tehran,City::Karachi,City::Mumbai,City::Kolkata,City::Chennai})));
    hm.insert(make_pair<City,box>(City::Mumbai,box(Color::Black,vector<City>{City::Karachi,City::Delhi,City::Chennai})));
    hm.insert(make_pair<City,box>(City::Kolkata,box(Color::Black,vector<City>{City::Delhi,City::Chennai,City::Bangkok,City::HongKong})));
    hm.insert(make_pair<City,box>(City::Chennai,box(Color::Black,vector<City>{City::Mumbai,City::Delhi,City::Kolkata,City::Bangkok,City::Jakarta})));
    //~~~~~~~~~~~~~~~~/BLACK~~~~~~~~~~~~~~~~


    //~~~~~~~~~~~~~~~~RED~~~~~~~~~~~~~~~~
   hm.insert(make_pair<City,box>(City::Sydney,box(Color::Red,vector<City>{City::Jakarta,City::Manila,City::LosAngeles})));
   hm.insert(make_pair<City,box>(City::Jakarta,box(Color::Red,vector<City>{City::Chennai,City::Bangkok,City::HoChiMinhCity,City::Sydney})));
   hm.insert(make_pair<City,box>(City::HoChiMinhCity,box(Color::Red,vector<City>{City::Jakarta,City::Bangkok,City::HongKong,City::Manila})));
   hm.insert(make_pair<City,box>(City::Manila,box(Color::Red,vector<City>{City::SanFrancisco,City::Sydney,City::HoChiMinhCity,City::HongKong,City::Taipei})));
   hm.insert(make_pair<City,box>(City::Bangkok,box(Color::Red,vector<City>{City::Chennai,City::Kolkata,City::HongKong,City::HoChiMinhCity,City::Jakarta})));
   hm.insert(make_pair<City,box>(City::HongKong,box(Color::Red,vector<City>{City::Bangkok,City::HoChiMinhCity,City::Manila,City::Taipei,City::Kolkata,City::Shanghai})));
   hm.insert(make_pair<City,box>(City::Taipei,box(Color::Red,vector<City>{City::HongKong,City::Manila,City::Osaka,City::Shanghai})));
   hm.insert(make_pair<City,box>(City::Osaka,box(Color::Red,vector<City>{City::Taipei,City::Tokyo})));
   hm.insert(make_pair<City,box>(City::Shanghai,box(Color::Red,vector<City>{City::HongKong,City::Taipei,City::Tokyo,City::Seoul,City::Beijing})));
   hm.insert(make_pair<City,box>(City::Tokyo,box(Color::Red,vector<City>{City::Osaka,City::Shanghai,City::Seoul,City::SanFrancisco})));
   hm.insert(make_pair<City,box>(City::Seoul,box(Color::Red,vector<City>{City::Shanghai,City::Tokyo,City::Beijing})));
   hm.insert(make_pair<City,box>(City::Beijing,box(Color::Red,vector<City>{City::Shanghai,City::Seoul})));
    //~~~~~~~~~~~~~~~~/RED~~~~~~~~~~~~~~~~
}



void Board::remove_cures(){
    isDiscoveredCure[Color::Black] = false;
    isDiscoveredCure[Color::Yellow] = false;
    isDiscoveredCure[Color::Blue] = false;
    isDiscoveredCure[Color::Red] = false;
}




};