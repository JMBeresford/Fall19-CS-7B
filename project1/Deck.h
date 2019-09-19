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
    void addCard(Card);
    void clear();
    Deck operator+(const Deck&);
    Card& operator[](int i);

private:
    std::vector<Card> _deck;
    std::string ranks[13] {
        "2" , "3" , "4" , "5" , "6" , "7" , "8" ,
        "9" , "10" , "Jack" , "Queen" , "King" ,"Ace"
    };
    std::string suits[4] {
        "Hearts", "Clubs", "Diamonds", "Spades"
    };
};

#endif