#include "Deck.h"


Deck::Deck()
{
    this->_deck.clear();

    for (auto suit : this->suits)
        for (auto rank : this-> ranks)
            this->_deck.push_back(Card(suit, rank));
}

Deck::Deck(size_t i)
{
    for (auto suit : this-> suits)
    {
        if (this->_deck.size() >= i)
            break;
        else
            for (auto rank : this->ranks)
            {
                if (this->_deck.size() >= i)
                    break;
                else
                    this->_deck.push_back(Card(suit, rank));
            }
    }
}

std::string Deck::display()
{
    std::string str = "";

    for (auto card : this->_deck)
        str += card.getCard() + "\n";

    return str;
}

std::vector<Card> Deck::getDeck()
{
    return this->_deck;
}

void Deck::addCard(Card c)
{
    this->_deck.push_back(c);
}

void Deck::clear()
{
    this->_deck.clear();
}

Deck Deck::operator+(const Deck& rhs)
{
    Deck rTemp = rhs;
    Deck lTemp;
    
    lTemp._deck = this->_deck;
    
    for (auto card : rTemp.getDeck())
        lTemp._deck.push_back(card);

    return lTemp;
}

Card& Deck::operator[](int i)
{
    return this->_deck[i];
}