#include <iostream>
#include <vector>
#include "../code/Game.h"

using namespace std;

int main()
{
    bool shutdown = false;

    while (!shutdown)
    {
        cout << "" << endl;
        cout << "Welcome to Blackjack!" << endl;
        cout << "" << endl;
        cout << "Press 1 to start a new game or 2 to quit" << endl;

        int selection;
        cin >> selection;

        if (selection == 2)
        {

            shutdown = true;
        }

        else if (selection == 1)
        {
               cout << "" << endl;
            cout << "New Game" << endl;
            cout << "" << endl;
            Game game;
            game.run_game();
        }
    }

    cout << "Thank you for playing!" << endl;

    return 0;
}
