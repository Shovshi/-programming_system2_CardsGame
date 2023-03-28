#pragma once
#include "player.hpp"
#include <string>

namespace ariel{
class Game{
private:
    Player p1;
    Player p2;
public:
    
    Game(Player p1, Player p2){
        this->p1 = p1;
        this->p2 = p2;
    }
    
    Game(){}

    void playTurn();
    void printLastTurn();
    void playAll();
    void printWiner();
    void printLog();
    void printStats();

    };
}

