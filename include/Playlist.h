#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "Song.h"
#include <vector>
#include <string>

using namespace std;

class Playlist
{
private:
    vector<Song> songs;

public:
    void addSong(const Song &song);
    void removeSong(const string &title);
    vector<Song> getSongsByMood(const string &mood) const;
    void displayAllSongs() const;
    vector<Song> getAllSongs() const;
};

#endif
