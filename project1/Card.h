#ifndef CARD_H
#define CARD_H
#include <string>


class Card
{
public:
    Card();
    Card(std::string, std::string);

    std::string getSuit();
    std::string getRank();
    std::string getCard();

private:
    std::string suit, rank;
};

#endif