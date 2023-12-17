#ifndef CARD_H__
#define CARD_H__

#include <string>
#include <memory>
#include <vector>

enum Suit {
  CLUBS,
  HEARTS,
  SPADES,
  DIAMONDS
};

enum Value {
  ACE,
  TWO,
  THREE,
  FOUR,
  FIVE,
  SIX,
  SEVEN,
  EIGHT,
  NINE,
  TEN,
  JACK,
  QUEEN,
  KING,
};


class Card{

public:

    Suit suit_of_card;
    Value value_of_card;
    void Print();
    std::string convertsuit();
    std::string convertvalue();
    int convertpoints();
};

#endif  // Card_H__