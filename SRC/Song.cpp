#include "../include/Song.h"
#include <iostream>
using namespace std;

Song::Song(const string &title, const string &artist, const string &mood, const string &filepath)
    : title(title), artist(artist), mood(mood), filepath(filepath) {}

string Song::getTitle() const
{
    return title;
}

string Song::getArtist() const
{
    return artist;
}

string Song::getMood() const
{
    return mood;
}

string Song::getFilePath() const
{
    return filepath;
}

void Song::setTitle(const string &newTitle)
{
    title = newTitle;
}

void Song::setArtist(const string &newArtist)
{
    artist = newArtist;
}

void Song::setMood(const string &newMood)
{
    mood = newMood;
}

void Song::setFilePath(const string &newPath)
{
    filepath = newPath;
}

void Song::display() const
{
    cout << "🎵 Title: " << title << "\n";
    cout << "🎤 Artist: " << artist << "\n";
    cout << "💡 Mood: " << mood << "\n";
    cout << "📁 File Path: " << filepath << "\n";
}
