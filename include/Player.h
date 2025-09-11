#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player
{
private:
    std::string name;
    int moodLevel;
    int energyLevel;

public:
    Player();
    Player(std::string playerName, int playerMoodLevel, int playerEnergyLevel);
    std::string getName() const;
    int getMoodLevel() const;
    int getEnergyLevel() const;
    void setName(const std::string &newName);
    void setMoodLevel(int newMoodLevel);
    void setEnergyLevel(int newEnergyLevel);
    void updateMood(int change);
    void updateEnergy(int change);
    void displayPlayerInfo() const;
    void savePlayerData(const std::string &filename) const;
    bool loadPlayerData(const std::string &filename);
};

#endif
