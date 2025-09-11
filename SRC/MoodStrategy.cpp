#include "../include/MoodStrategy.h"

vector<Song> HappyStrategy::filterSongs(const vector<Song> &songs) const
{
    vector<Song> filtered;
    for (const auto &song : songs)
    {
        if (song.getMood() == "Happy")
        {
            filtered.push_back(song);
        }
    }
    return filtered;
}

vector<Song> SadStrategy::filterSongs(const vector<Song> &songs) const
{
    vector<Song> filtered;
    for (const auto &song : songs)
    {
        if (song.getMood() == "Sad")
        {
            filtered.push_back(song);
        }
    }
    return filtered;
}

vector<Song> ChillStrategy::filterSongs(const vector<Song> &songs) const
{
    vector<Song> filtered;
    for (const auto &song : songs)
    {
        if (song.getMood() == "Chill")
        {
            filtered.push_back(song);
        }
    }
    return filtered;
}
