#ifndef MOODSTRATEGY_H
#define MOODSTRATEGY_H

#include <vector>
#include <string>
#include "Song.h"

using namespace std;

class IMoodStrategy
{
public:
    virtual vector<Song> filterSongs(const vector<Song> &songs) const = 0;
    virtual ~IMoodStrategy() {}
};

class HappyStrategy : public IMoodStrategy
{
public:
    vector<Song> filterSongs(const vector<Song> &songs) const override;
};

class SadStrategy : public IMoodStrategy
{
public:
    vector<Song> filterSongs(const vector<Song> &songs) const override;
};

class ChillStrategy : public IMoodStrategy
{
public:
    vector<Song> filterSongs(const vector<Song> &songs) const override;
};

#endif
