#ifndef DECK_H__
#define DECK_H__

#include <string>
#include <memory>
#include <vector>
#include "Card.h"

class Deck
{
public:
    Deck();
    void shuffle_deck();
    Card get_card();
    bool check_empty();
    int size_of_deck();

private:
    std::vector<Card> deck;
};

#endif // Deck_H__