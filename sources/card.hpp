#pragma once

enum Suit {HEARTS, SPADES, CLUBS, DIAMONDS};
enum Rank {TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE};
  
class Card {
private:
  Rank rank;
  Suit suit;
  
public:
  Card(Rank rank, Suit suit){
    this->rank = rank;
    this->suit = suit;
  }

  Card(){};
  
};


