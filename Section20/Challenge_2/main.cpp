// Section 20
// Challenge 2
//  Lists

#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>

using namespace std;

class Song {
    friend std::ostream &operator<<(std::ostream &os, const Song &s);
    std::string name;
    std::string artist;
    int rating;
public:
    Song() = default;
    Song(std::string name, std::string artist, int rating)
            : name{name}, artist{artist}, rating{rating} {}
    std::string get_name() const {
        return name;
    }
    std::string get_artist() const {
        return artist;
    }
    int get_rating() const {
        return rating;
    }
    
    bool operator<(const Song &rhs) const  {
        return this->name < rhs.name;
    }
    
    bool operator==(const Song &rhs) const  {
        return this->name == rhs.name;
    }
};

std::ostream &operator<<(std::ostream &os, const Song &s) {
    os << std::setw(20) << std::left << s.name
       << std::setw(30) << std::left << s.artist
       << std::setw(2) << std::left << s.rating;
       return os;
}

void display_menu() {
    std::cout << "\nF - Play First Song" << std::endl;
    std::cout << "N - Play Next song" << std::endl;
    std::cout << "P - Play Previous song" << std::endl;
    std::cout << "A - Add and play a new Song at current location" << std::endl;
    std::cout << "L - List the current playlist" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song &song) {
    // This function should display 
    // Playing: followed by the song that is playing
    std::cout << "\nPlaying current song...."<< std::endl;
    cout<<song<<endl;
}

void display_playlist(const std::list<Song> &playlist, const Song &current_song) {
    // This function should display the current playlist 
    // and then the current song playing.
    for (auto val:playlist)
    {
        cout<<val<<endl;
    }
    cout<<"===================\n";
    play_current_song(current_song);
}
void new_song(list<Song> &playlist,const list<Song>::iterator &current_song)
{
    string name,aname;
    int rating;

    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    cout<<"Enter song name: ";
    getline(cin,name);
    
    cout<<"\nEnter artist name: ";
    getline(cin,aname);
    
    cout<<"\nEnter rating: ";
    cin>>rating;
    cout<<endl;
    playlist.insert(current_song,Song{name,aname,rating});
}

int main() {

    std::list<Song> playlist{
            {"God's Plan",        "Drake",                     5},
            {"Never Be The Same", "Camila Cabello",            5},
            {"Pray For Me",       "The Weekend and K. Lamar",  4},
            {"The Middle",        "Zedd, Maren Morris & Grey", 5},
            {"Wait",              "Maroone 5",                 4},
            {"Whatever It Takes", "Imagine Dragons",           3}          
    };
    for (auto val:playlist)
    {
        cout<<val<<endl;
    }
    std::list<Song>::iterator current_song = playlist.begin();
    
    // Your program logic goes here
    cout<<endl;
    char ch{};
    do{
        display_menu();
        cout<<"Enter a selection (Q to quit): \n";
        cin>>ch;
        switch(ch)
        {
            case 'F':
            case 'f':cout<<"Playing first song...."<<endl;
                        current_song = playlist.begin();
                        cout<<*current_song<<endl;
                        break;
            case 'N':
            case 'n':cout<<"Playing next song...."<<endl;
                        current_song++;
                        cout<<*current_song<<endl;
                        break;
            case 'P':
            case 'p':cout<<"Playing previous song...."<<endl;
                        current_song --;
                        cout<<*current_song;
                        break;
            case 'A':
            case 'a':
                    cout<<"Adding new song...."<<endl;
                    new_song(playlist,current_song);
                    -- current_song;
                    play_current_song(*current_song);
                    break;
            case 'L':
            case 'l':display_playlist(playlist,*current_song);
                        break;
        cout<<"==========================================="<<endl;
        }
    }while(ch != 'Q');    
    std::cout << "Thanks for listening!" << std::endl;
    return 0;
}