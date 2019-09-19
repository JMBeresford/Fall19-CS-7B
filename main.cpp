#include <iostream>
#include "Deck.h"
#include "Card.h"


int main()
{
    Deck mainDeck(21), sideDeck1(0), sideDeck2(0), sideDeck3(0);
    std::cout << "21 Card Trick\n\n";

    std::cout << mainDeck.display();
}