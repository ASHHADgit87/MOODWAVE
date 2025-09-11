#include <iostream>
#include <memory>
#include "../include/Player.h"
#include "../include/Playlist.h"
#include "../include/MoodFactory.h"

using namespace std;

void displayMenu()
{
    cout << "\n🎵=== MoodWave: Music Player Based on Mood ===🎵\n";
    cout << "1. View Player Info\n";
    cout << "2. Change Mood Level\n";
    cout << "3. Change Energy Level\n";
    cout << "4. Display Songs Matching Mood\n";
    cout << "5. Display All Songs\n";
    cout << "6. Save Player Data\n";
    cout << "7. Load Player Data\n";
    cout << "0. Exit\n";
    cout << "Choose an option: ";
}

string moodFromLevel(int moodLevel)
{
    if (moodLevel >= 7)
        return "Happy";
    else if (moodLevel >= 4)
        return "Chill";
    else
        return "Sad";
}

int main()
{
    Player player("Ashhad", 6, 7);
    Playlist playlist;

    playlist.addSong(Song("Sunshine", "Artist A", "Happy", "path/to/sunshine.mp3"));
    playlist.addSong(Song("Rainy Days", "Artist B", "Sad", "path/to/rainy.mp3"));
    playlist.addSong(Song("Ocean Breeze", "Artist C", "Chill", "path/to/ocean.mp3"));
    playlist.addSong(Song("Joyride", "Artist D", "Happy", "path/to/joyride.mp3"));
    playlist.addSong(Song("Melancholy", "Artist E", "Sad", "path/to/melancholy.mp3"));

    int choice;
    do
    {
        displayMenu();
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            player.displayPlayerInfo();
            break;

        case 2:
        {
            int change;
            cout << "Enter mood change (-10 to +10): ";
            cin >> change;
            player.updateMood(change);
            break;
        }

        case 3:
        {
            int change;
            cout << "Enter energy change (-10 to +10): ";
            cin >> change;
            player.updateEnergy(change);
            break;
        }

        case 4:
        {
            string currentMood = moodFromLevel(player.getMoodLevel());
            cout << "\n🎧 Showing songs for mood: " << currentMood << "\n";

            unique_ptr<IMoodStrategy> strategy(MoodFactory::createMoodStrategy(currentMood));
            if (strategy)
            {
                vector<Song> filtered = strategy->filterSongs(playlist.getAllSongs());
                if (filtered.empty())
                {
                    cout << "No songs found for this mood.\n";
                }
                else
                {
                    for (const auto &song : filtered)
                    {
                        song.display();
                        cout << "--------------------------\n";
                    }
                }
            }
            else
            {
                cout << "⚠️ No strategy found for this mood.\n";
            }
            break;
        }

        case 5:
            playlist.displayAllSongs();
            break;

        case 6:
            player.savePlayerData("player_data.dat");
            cout << "✅ Player data saved.\n";
            break;

        case 7:
            if (player.loadPlayerData("player_data.dat"))
                cout << "✅ Player data loaded.\n";
            else
                cout << "❌ Failed to load player data.\n";
            break;

        case 0:
            cout << "👋 Exiting MoodWave. Stay groovy!\n";
            break;

        default:
            cout << "⚠️ Invalid option. Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
