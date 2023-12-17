#include <gtest/gtest.h>
#include "../code/Card.h"
#include "../code/Deck.h"
#include "../code/Game.h"

#include <fstream>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class test_Deck : public ::testing::Test
{
protected:
    static void SetUpTestCase()
    {
    }

    static void TearDownTestCase()
    {
    }

    void SetUp() override
    {
    }
    void TearDown() override
    {
    }
};

TEST_F(test_Deck, Testshuffle_deck)
{
    Deck unshuffled_deck;
    Deck shuffled_deck;
    bool decks_different = false;
    shuffled_deck.shuffle_deck();
    while (!unshuffled_deck.check_empty())
    {
        Card unshuffled_card = unshuffled_deck.get_card();
        Card shuffled_card = shuffled_deck.get_card();

        if (unshuffled_card.convertpoints() != shuffled_card.convertpoints())
        {
            decks_different = true;
        }
    }

    ASSERT_TRUE(decks_different);
}

TEST_F(test_Deck, Testget_card)
{
    Deck new_deck;
    new_deck.get_card();
    ASSERT_TRUE(new_deck.size_of_deck()==1);

}

class test_Game : public ::testing::Test
{
protected:
    static void SetUpTestCase()
    {
    }

    static void TearDownTestCase()
    {
    }

    void SetUp() override
    {
    }
    void TearDown() override
    {
    }
};
