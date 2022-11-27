//
// Created by Haibin Cao on 10/30/22.
//

#include "PokerScore.h"

int PokerScore::array_Counter[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 7 0};

PokerScore::PokerScore()
{
}

void PokerScore::operator+=(const Scores& scores)
{
    this->scores.push_back(scores);
}

Scores& PokerScore::operator[](unsigned int index)
{
    return scores[index];
}

bool operator==(const PokerScore& p, Scores score)
{
    for (int i = 0; i < p.scores.size(); ++i)
    {
        if (score == p.scores[i])
        {
            return true;
        }
    }
    return false;
}

int PokerScore::getSize()
{
    return scores.size();
}

void PokerScore::counterUpdate()
{
    for (int i = 0; i < scores.size(); ++i)
    {
        if(scores[i] == 9)
        {
            array_Counter[9]++;
        }
        else if(scores[i] == 8)
        {
            array_Counter[8]++;
        }
        else if(scores[i] == 7)
        {
            array_Counter[7]++;
        }
        else if(scores[i] == 6)
        {
            array_Counter[6]++;
        }
        else if(scores[i] == 5)
        {
            array_Counter[5]++;
        }
        else if(scores[i] == 4)
        {
            array_Counter[4]++;
        }
        else if(scores[i] == 3)
        {
            array_Counter[3]++;
        }
        else if(scores[i] == 2)
        {
            array_Counter[2]++;
        }
        else if(scores[i] == 1)
        {
            array_Counter[1]++;
        }
        else if(scores[i] == 0)
        {
            array_Counter[0]++;
        }
    }
}

void PokerScore::print()
{
    std::cout << "Royal Flush: " << array_Counter[0] << std::endl;
    std::cout << "Straight Flush: " << array_Counter[1] << std::endl;
    std::cout << "Four of A Kind: " << array_Counter[2] << std::endl;
    std::cout << "Full House: " << array_Counter[3] << std::endl;
    std::cout << "Flush: " << array_Counter[4] << std::endl;
    std::cout << "Straight: " << array_Counter[5] << std::endl;
    std::cout << "Three of A Kind: " << array_Counter[6] << std::endl;
    std::cout << "Two Pair: " << array_Counter[7] << std::endl;
    std::cout << "One Pair: " << array_Counter[8] << std::endl;
    std::cout << "High Card: " << array_Counter[9] << std::endl;
}



