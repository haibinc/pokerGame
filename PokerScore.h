//
// Created by Haibin Cao on 10/30/22.
//

#ifndef PLAYINGCARD_POKERSCORE_H
#define PLAYINGCARD_POKERSCORE_H
#include <iostream>
#include <vector>
#include "Scores.h"

class PokerScore
{
private:
    std::vector<Scores> scores;
    static int array_Counter[10];
    int index;
public:
    PokerScore();
    void operator+=(const Scores& scores);
    void counterUpdate();
    void print();
    friend bool operator==(const PokerScore& p, Scores score);
    int getSize();
    Scores& operator[](unsigned int index);
};


#endif //PLAYINGCARD_POKERSCORE_H
