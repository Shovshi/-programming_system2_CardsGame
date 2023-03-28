#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"
#include <stdexcept>

TEST_CASE("Initialize the player's name") {
    Player p1("Shoval");
    Player p2("Eli");
    Player p3("Emilia Attias");
    CHECK(p1.name == "Shoval");
    CHECK(p2.name == "Eli");
    CHECK(p3.name == "Emilia Attias");
}

TEST_CASE("Starting the game with 52 cards") {
    Player p1("Shoval");
    Player p2("Eli");
    int total = p1.stacksize() + p2.stacksize();
    CHECK(total == 52);
}

TEST_CASE("Starting the game with 0 cards taken for each player") {
    Player p3("Raheli");
    Player p4("Linoy");
    int p3Taken = p3.cardesTaken();
    int p4Taken = p4.cardesTaken();
    CHECK(p3Taken == 0);
    CHECK(p4Taken == 0);
}

TEST_CASE("Cheking the cards taken"){
Player p1("Evyatar");
Player p2("Ori");
ariel::Game game(p1,p2);
game.playTurn();
bool cards = p1.cardesTaken() > 0;
bool cards2 = p2.cardesTaken() > 0;
CHECK(cards);
CHECK(cards2);
}

TEST_CASE("Checking the playTurn function") {
    Player p1("Aviv");
    Player p2("Talia");
    ariel::Game game(p1,p2);
    int numOfCardsBefore = p1.stacksize();
    int numOfCardsBefore2 = p2.stacksize();
    game.playTurn();
    int numOfCardsAfter = p1.stacksize();
    int numOfCardsAfter2 = p2.stacksize();
    CHECK(numOfCardsAfter == numOfCardsBefore -1);
    CHECK(numOfCardsAfter2 == numOfCardsBefore2 -1);
}

TEST_CASE("Checking the cardsTaken function"){
    Player p1("Inon");
    Player p2("Shon");
    ariel::Game game(p1,p2);
    game.playTurn();
    int numOfCardsTaken = p1.cardesTaken();
    int numOfCardsTaken2 = p2.cardesTaken();
    bool result = ((numOfCardsTaken == 1) || (numOfCardsTaken2 == 1));
    CHECK(result);
}

TEST_CASE("Checking the playAll function"){
    Player p1("Ari");
    Player p2("Avishag");
    ariel::Game game(p1,p2);
    game.playAll();
    int numOfCards = p1.stacksize();
    int numOfCards2 = p2.stacksize();
    CHECK(numOfCards == 0);
    CHECK(numOfCards2 == 0);
}

TEST_CASE("Checking a simple game"){
    Player p1("A");
    Player p2("B");
    ariel::Game game(p1,p2);
    int numOfCardsBefore = p1.stacksize();
    int numOfCardsBefore2 = p2.stacksize();
    for (int i = 0; i < 5; i++)
    {
        game.playTurn();
    }
    int numOfCardsAfter = p1.stacksize();
    int numOfCardsAfter2 = p2.stacksize();
    CHECK(numOfCardsAfter == numOfCardsBefore -5);
    CHECK(numOfCardsAfter2 == numOfCardsBefore2 -5);
}

TEST_CASE("Checking an errors exepction"){
    Player p1("C");
    Player p2("D");
    ariel::Game game(p1,p2);
    int numOfCardsBefore = p1.stacksize();
    int numOfCardsBefore2 = p2.stacksize();
    game.playAll();
    CHECK_THROWS(game.playTurn());
}

TEST_CASE("Checking a simple game"){
    Player p1("E");
    Player p2("F");
    ariel::Game game(p1,p2);
    int numOfCardsBefore = p1.stacksize();
    int numOfCardsBefore2 = p2.stacksize();
    for (int i = 0; i < 10; i++)
    {
        game.playTurn();
    }
    int numOfCardsAfter = p1.stacksize();
    int numOfCardsAfter2 = p2.stacksize();
    CHECK(numOfCardsAfter == numOfCardsBefore -10);
    CHECK(numOfCardsAfter2 == numOfCardsBefore2 -10);
}

TEST_CASE("Checking a simple game"){
    Player p1("E");
    Player p2("F");
    ariel::Game game(p1,p2);
    for (int i = 0; i < 10; i++)
    {
        game.playTurn();
    }
    int numOfCards = p1.cardesTaken();
    int numOfCards2 = p2.cardesTaken();
    bool cards = numOfCards <= 10;
    bool cards2 = numOfCards2 <= 10;
    CHECK(cards);
    CHECK(cards2);
}









