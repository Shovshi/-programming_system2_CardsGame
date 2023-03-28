#pragma once
#include <string>
using namespace std;

class Player{
public:
    std::string name;
public:
    Player(string name){
        this->name = name;
    }

    Player(){
        this->name = "Default";
    }

    int stacksize();

    int cardesTaken();
        
};