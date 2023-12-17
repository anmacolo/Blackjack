#include "Card.h"
#include <iostream>

using namespace std;

string Card::convertsuit()
{
    if (suit_of_card == CLUBS)
    {
        return "CLUBS";
    }
    else if (suit_of_card == HEARTS)
    {
        return "HEARTS";
    }
    else if (suit_of_card == SPADES)
    {
        return "SPADES";
    }
    else
    {
        return "DIAMONDS";
    }
}

string Card::convertvalue()
{

    if (ACE < value_of_card && value_of_card < JACK)
    {
        return to_string(value_of_card + 1);
    }
    else if(value_of_card == ACE){
        return "A";
    }
    else if(value_of_card == KING){
        return "K";
    }
    else if(value_of_card == QUEEN){
        return "Q";
    }
    else{
        return "J";
    }

}

void Card::Print(){
    cout<<convertvalue() << " of " <<convertsuit()<<endl;
}

int Card::convertpoints(){
     if (ACE < value_of_card && value_of_card < JACK)
    {
        return (value_of_card + 1);
    }
    else if(value_of_card == ACE){
        return 1;
    }
    else{
        return 10;
    }
}