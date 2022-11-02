//
// Created by Haibin Cao on 10/30/22.
//

#ifndef PLAYINGCARD_POKERSCORE_H
#define PLAYINGCARD_POKERSCORE_H
#include "Scores.h"
#include "CardHandScorer.h"

class PokerScore
{
private:
    std::vector<Scores> scores;
    int index;
public:
    PokerScore();
    void operator+=(const Scores& scores);
    friend bool operator==(const PokerScore& p, Scores score);
    Scores& operator[](unsigned int index);
};


#endif //PLAYINGCARD_POKERSCORE_H
