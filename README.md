# 🎵 MoodWave  

**MoodWave** is a C++ and Qt-based mood-based music recommendation system. It uses Object-Oriented Programming, the Strategy Pattern, and file I/O to recommend songs based on your current mood while storing personalized user data.  

## ✨ Features  

- 🎨 **Core Application:**  
  - Built with **C++17** and **Qt5**  
  - Strategy Design Pattern for mood-based song filtering (Happy, Sad, Chill)  
  - Playlist management (add, remove, display songs)  
  - Player profile with mood & energy tracking  
  - File I/O for persistent data storage  
  - Simple encryption/decryption for secure user data  

- ⚙️ **System Components:**  
  - `Song` → Stores title, artist, mood, and file path  
  - `Playlist` → Manages collections of songs  
  - `Player` → Tracks mood/energy levels & saves data  
  - `MoodStrategy` & `MoodFactory` → Filters songs based on mood dynamically  
  - GUI stubs (`Main_gui.cpp`, `MoodwaveWindow.cpp`) for future Qt-based interface  

## 🔑 Key Functionality  

- Create and save a player profile  
- Track & update mood and energy levels  
- Filter songs dynamically by mood  
- Display all songs or mood-based playlists  
- Save/load user data with encryption support  
- Extendable Qt GUI for interactive experience  

## 👨‍💻 Author

- **Muhammad Ashhadullah Zaheer**  
- 🔗 LinkedIn: [Muhammad Ashhadullah Zaheer](https://www.linkedin.com/in/muhammad-ashhadullah-zaheer-41194a340/) 
