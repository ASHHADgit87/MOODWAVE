#include "player.h"
#include <iostream>
#include <fstream>

using namespace std;

Player::Player() : name("Unknown"), moodLevel(5), energyLevel(5) {}

Player::Player(string playerName, int playerMoodLevel, int playerEnergyLevel)
    : name(playerName), moodLevel(playerMoodLevel), energyLevel(playerEnergyLevel) {}

string Player::getName() const
{
    return name;
}

int Player::getMoodLevel() const
{
    return moodLevel;
}

int Player::getEnergyLevel() const
{
    return energyLevel;
}

void Player::setName(const string &newName)
{
    name = newName;
}

void Player::setMoodLevel(int newMoodLevel)
{
    moodLevel = newMoodLevel;
}

void Player::setEnergyLevel(int newEnergyLevel)
{
    energyLevel = newEnergyLevel;
}

void Player::updateMood(int change)
{
    moodLevel += change;
    if (moodLevel < 0)
        moodLevel = 0;
    if (moodLevel > 10)
        moodLevel = 10;
}

void Player::updateEnergy(int change)
{
    energyLevel += change;
    if (energyLevel < 0)
        energyLevel = 0;
    if (energyLevel > 10)
        energyLevel = 10;
}

void Player::displayPlayerInfo() const
{
    cout << "Player Name: " << name << endl;
    cout << "Mood Level: " << moodLevel << "/10" << endl;
    cout << "Energy Level: " << energyLevel << "/10" << endl;
}

void Player::savePlayerData(const string &filename) const
{
    ofstream outFile(filename, ios::binary);
    if (outFile)
    {
        outFile.write(reinterpret_cast<const char *>(this), sizeof(*this));
        outFile.close();
    }
    else
    {
        cerr << "Error: Unable to save player data." << endl;
    }
}

bool Player::loadPlayerData(const string &filename)
{
    ifstream inFile(filename, ios::binary);
    if (inFile)
    {
        inFile.read(reinterpret_cast<char *>(this), sizeof(*this));
        inFile.close();
        return true;
    }
    else
    {
        cerr << "Error: Unable to load player data." << endl;
        return false;
    }
}
