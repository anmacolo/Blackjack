#include "Deck.h"
#include <iostream>

using namespace std;

Deck::Deck() {
    for(int i = 0; i < 4; i++){
        for(int k = 0; k < 13; k++){
            
             Card card = {static_cast<Suit>(i),static_cast<Value>(k)};
             deck.push_back(card);
        }
    }

    cout << "Deck Initialized" << endl;

}

void Deck::shuffle_deck()
{
    srand((unsigned)time(0));
    for (int i = 0; i < deck.size(); i++)
    {

        swap(deck[i], deck[rand() % 52]);
    }
    for (int i = 0; i < deck.size(); i++){
        deck[i].Print();
    }
    cout << "" <<endl;
}

Card Deck::get_card()
{
    Card card = deck.back();
    deck.pop_back();
    return card;
}

bool Deck::check_empty(){
    if(deck.size() == 0){
        return true;
    }
    return false;
}

int Deck::size_of_deck(){
    int size = 0;
    Deck deck;
    deck.get_card();
    size++;
    return size;
}