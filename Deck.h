#ifndef DECK_H
#define DECK_H
#include <vector>
#include <string>
#include "Card.h"


class Deck
{
public:
    Deck();
    Deck(size_t);

    std::string display();
    std::vector<Card> getDeck();
    Deck operator+(const Deck&);
    Card& operator[](int i);

private:
    std::vector<Card> _deck;
    std::string ranks[52] {
        "2" , "3" , "4" , "5" , "6" , "7" , "8" ,
        "9" , "10" , "J" , "Q" , "K" ,"A"
    };
    std::string suits[4] {
        "Hearts", "Clubs", "Diamonds", "Spades"
    };
};

#endif