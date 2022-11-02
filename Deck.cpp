//
// Created by Haibin Cao on 10/19/22.
//

#include "Deck.h"

Deck::Deck()
{
    int deck_Index = 0;
    //good luck reading this code in the future
    for (int i = Ace; i < COUNT_RANKS; ++i)
    {
        for (int j = Diamonds; j < COUNT_SUITS; ++j)
        {
            deck[deck_Index] = LightCard(static_cast<Ranks>(i), static_cast<Suits>(j));
            deck_Index++;
        }
    }
}

std::ostream& operator<<(std::ostream& out, const LightCard& card)
{
    return out << card.toStringRank() << " of " << card.toStringSuit() << std::endl;
}

bool operator==(const LightCard& lhs, const LightCard& rhs)
{
    if(lhs.getEnumRank() == rhs.getEnumRank() && lhs.getEnumSuit() == rhs.getEnumSuit())
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Deck::printDeck()
{
    for (int i = 0; i < deck_Size; ++i)
    {
        std::cout << deck[i];
    }
}

void Deck::shuffleDeck()
{
    srand(time(0));
    LightCard temp[52];
    for (int i = 0; i < deck_Size; ++i)
    {
        int index = rand() % 52;
        temp[index] = deck[index];
        deck[index] = deck[i];
        deck[i] = temp[index];
    }
}

LightCard Deck::dealCard()
{
    LightCard temp[52];
    temp[cardIndex] = deck[cardIndex];
    deck[cardIndex] = LightCard(EmptyRank, EmptySuit);
    cardIndex++;
    return temp[cardIndex-1];
}

bool Deck::empty()
{
    for (int i = 0; i < deck_Size; ++i)
    {
        if(deck[i] == LightCard(EmptyRank, EmptySuit))
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}
