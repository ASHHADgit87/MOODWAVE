#ifndef SONG_H
#define SONG_H

#include <string>
using namespace std;

class Song
{
private:
    string title;
    string artist;
    string mood;
    string filepath;

public:
    Song(const string &title, const string &artist, const string &mood, const string &filepath);

    string getTitle() const;
    string getArtist() const;
    string getMood() const;
    string getFilePath() const;

    void setTitle(const string &newTitle);
    void setArtist(const string &newArtist);
    void setMood(const string &newMood);
    void setFilePath(const string &newPath);

    void display() const;
};
#endif
