#include "Game.h"
#include <iostream>

using namespace std;

Game::Game() {}

void Game::firstdeal()
{
    playerhand.push_back(deck.get_card());
    playerhand.push_back(deck.get_card());
    dealerhand.push_back(deck.get_card());
    dealerhand.push_back(deck.get_card());
    cout << "Your hand contains: " << endl;

    for (int i = 0; i < playerhand.size(); i++)
    {
        playerhand[i].Print();
    }

    cout << "Your total count: " << calculatescore(playerhand) << endl;
    cout << "" << endl;

    cout << "Dealer's hand contains: " << endl;
    dealerhand[0].Print();
    cout << "" << endl;
}

int Game::hit(vector<Card> &hand, bool isPlayer)
{
    Card card = deck.get_card();
    hand.push_back(card);
    cout << "" << endl;
    cout << "Hit" << endl;
    if (isPlayer)
    {
        cout << "Your hand contains: " << endl;
    }
    else
    {
        cout << "Dealer's hand contains" << endl;
    }

    for (int i = 0; i < hand.size(); i++)
    {
        hand[i].Print();
    }

    cout << "" << endl;
    if (isPlayer)
    {
        cout << "Your total count is: " << calculatescore(hand) << endl;
        cout << "" << endl;
    }
    else
    {
        cout << "Dealer's total count is: " << calculatescore(hand) << endl;
    }
    return calculatescore(hand);
}

void Game::run_game()
{
    cout << "****Welcome player!****" << endl
         << endl;
    bool overdraw = false;
    deck.shuffle_deck();
    firstdeal();
    while (!overdraw)
    { //check for overdraw
        if (calculatescore(playerhand) > 21)
        {
            overdraw = true;
            cout << "****Overdraw, Dealer Wins!****" << endl;
            break;
        }
        else if (calculatescore(playerhand) == 21)
        {
            cout << "****21! Dealer's Turn****" << endl;
            break;
        }

        int hitorstand;
        cout << "press 1 to hit or 2 to stand" << endl
             << endl;
        cin >> hitorstand;
        if (hitorstand == 1)
        {
            hit(playerhand, true);
        }
        else if (hitorstand == 2)
        {
            cout << "" << endl;
            cout << "Stand" << endl;
            cout << "Dealer's Turn" << endl;
            cout << "" << endl;
            break;
        }
    }

    if (!overdraw)
    {

        while (calculatescore(dealerhand) < calculatescore(playerhand))
        {
            hit(dealerhand, false);

            if (calculatescore(dealerhand) > 21)
            {
                cout << "****Dealer Overdraw, Player Wins!****" << endl;
                overdraw = true;
                break;
            }
        }
    }

    if (!overdraw)
    {
        checkwin();
    }
}

void Game::checkwin()
{
    if (21 - calculatescore(playerhand) < 21 - calculatescore(dealerhand))
    {
        cout << "****Player Wins!****" << endl;
    }

    else if (21 - calculatescore(playerhand) > 21 - calculatescore(dealerhand))
    {
        cout << "****Dealer Wins!****" << endl;
    }
    else if (calculatescore(playerhand) == calculatescore(dealerhand))
    {
        cout << "****Tie Game!****" << endl;
    }
}

int Game::calculatescore(vector<Card> &hand)
{
    int num_aces = 0;
    int points = 0;
    for (int i = 0; i < hand.size(); i++)
    {
        if (hand[i].value_of_card == ACE)
        {
            num_aces += 1;
        }
        points += hand[i].convertpoints();
    }

    if (num_aces > 0 && points < 12)
    {
        points += 10;
    }

    return points;
}

int Game::hand_size(){
    int hand_size = 0;
    hit(playerhand, true);
    hand_size++;
}