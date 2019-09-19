#include "Card.h"


Card::Card()
{
    this->suit = "clubs";
    this->rank = "2";
}

Card::Card(std::string suit, std::string rank)
{
    this->suit = suit;
    this->rank = rank;
}

std::string Card::getSuit()
{
    return this->suit;
}

std::string Card::getRank()
{
    return this->rank;
}

std::string Card::getCard()
{
    return this->rank + " of " + this->suit;
}