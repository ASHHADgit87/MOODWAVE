#include "../include/MoodFactory.h"
#include "../include/MoodStrategy.h"

IMoodStrategy *MoodFactory::createMoodStrategy(const string &mood)
{
    if (mood == "Happy")
    {
        return new HappyStrategy();
    }
    else if (mood == "Sad")
    {
        return new SadStrategy();
    }
    else if (mood == "Chill")
    {
        return new ChillStrategy();
    }
    else
    {
        return nullptr;
    }
}
