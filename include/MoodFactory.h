#ifndef MOODFACTORY_H
#define MOODFACTORY_H

#include "MoodStrategy.h"

class MoodFactory
{
public:
    static IMoodStrategy *createMoodStrategy(const string &mood);
};

#endif
