#include "../include/Playlist.h"
#include <iostream>

void Playlist::addSong(const Song &song)
{
    songs.push_back(song);
}

void Playlist::removeSong(const string &title)
{
    for (auto it = songs.begin(); it != songs.end(); ++it)
    {
        if (it->getTitle() == title)
        {
            songs.erase(it);
            break;
        }
    }
}

vector<Song> Playlist::getSongsByMood(const string &mood) const
{
    vector<Song> filtered;
    for (const auto &song : songs)
    {
        if (song.getMood() == mood)
        {
            filtered.push_back(song);
        }
    }
    return filtered;
}

void Playlist::displayAllSongs() const
{
    for (const auto &song : songs)
    {
        song.display();
        cout << "--------------------------\n";
    }
}

vector<Song> Playlist::getAllSongs() const
{
    return songs;
}
