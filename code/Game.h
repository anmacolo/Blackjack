#ifndef GAME_H__
#define GAME_H__

#include <string>
#include <memory>
#include <vector>
#include "Deck.h"

using namespace std;



class Game{
    public:
    Game();

    void firstdeal();
    int hit(vector<Card> &hand, bool isPlayer);
    void hand_contains();
    void run_game();
    void checkwin();
    bool checkblackjackplayer();
    bool checkblackjackdealer();
    int calculatescore(vector<Card> &hand);
    int hand_size();

    private:

    vector<Card> playerhand;
    vector<Card> dealerhand;
    Deck deck;

};

#endif  // GAME_H__