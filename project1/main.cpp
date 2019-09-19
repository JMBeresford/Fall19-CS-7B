#include <iostream>
#include <limits>
#include "Deck.h"
#include "Card.h"

void pause();
void showPiles(std::vector<Deck>&);
void getPile(int&);
void shuffle(std::vector<Deck>&, int);

int main()
{
    int pile;
    std::vector<Deck> deckBox = {Deck(21), Deck(0), Deck(0), Deck(0)};
    std::cout << "21 Card Trick\n\n";

    std::cout << deckBox[0].display() << "\nChoose a card and "
                                    << "then press enter..."
                                    << std::endl;

    pause();

    for (size_t i = 0; i < deckBox[0].getDeck().size(); i++)
    {
        if (i < 7)
            deckBox[1].addCard(deckBox[0][i]);
        else if (i >= 7 && i < 14)
            deckBox[2].addCard(deckBox[0][i]);
        else
            deckBox[3].addCard(deckBox[0][i]);
    }

    showPiles(deckBox);
    getPile(pile);
    shuffle(deckBox, pile);

    showPiles(deckBox);
    getPile(pile);
    shuffle(deckBox, pile);

    showPiles(deckBox);
    getPile(pile);

    std::string str = "Your card is " + deckBox[pile][3].getCard();
    std::cout << str << std::endl << std::endl;    
}

void pause()
{
    std::string temp;

    std::getline(std::cin, temp);
}

void showPiles(std::vector<Deck>& deckBox)
{
    for (size_t i = 1; i < deckBox.size(); i++)
    {
        std::cout << "\nPile " << i << std::endl << std::endl;

        std:: cout << deckBox[i].display();
    }
}

void getPile(int& p)
{
    std::cout << "What pile is your card in: ";
    std::cin >> p;
    std::cout << std::endl << std::endl;
}

void shuffle(std::vector<Deck>& deckBox, int pile)
{
    switch (pile)
    {
        case 1:
            deckBox[0] = deckBox[2] + deckBox[1] + deckBox[3];
            break;
        case 2:
            deckBox[0] = deckBox[3] + deckBox[2] + deckBox[1];
            break;
        case 3:
            deckBox[0] = deckBox[1] + deckBox[3] + deckBox[1];
    }

    for (size_t i = 1; i < deckBox.size(); i++)
        deckBox[i].clear();

    for (size_t i = 0; i < deckBox[0].getDeck().size(); i++)
    {
        switch (i % 3)
        {
            case 0:
                deckBox[1].addCard(deckBox[0][i]);
                break;
            case 1:
                deckBox[2].addCard(deckBox[0][i]);
                break;
            case 2:
                deckBox[3].addCard(deckBox[0][i]);
                break;
        }
    }
}