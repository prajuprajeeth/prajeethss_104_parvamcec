#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <locale> // For handling emoji characters
#include <codecvt> // For handling emoji characters
using namespace std;

int main() {
    // Set locale to handle UTF-8 characters
    locale::global(locale("en_US.UTF-8"));
    
    string name;
    cout << "Enter the name of your special someone: ";
    getline(cin, name);
    
    cout << "\nDear " << name << "...\n\n";
    this_thread::sleep_for(chrono::seconds(2));
    
    cout << "From the moment I first met you,\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "my heart knew you were the one.\n\n";
    this_thread::sleep_for(chrono::seconds(2));
    
    cout << "With every passing day,\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "my love for you grows stronger.\n\n";
    this_thread::sleep_for(chrono::seconds(2));
    
    cout << name << ", will you make me the happiest person alive?\n";
    this_thread::sleep_for(chrono::seconds(3));
    cout << "Will you marry me? (Ring)\n\n"; // Replaced emoji with text since some consoles don't support emoji
    
    string response;
    getline(cin, response);
    
    // Convert response to lowercase for better comparison
    string lowerResponse = response;
    transform(lowerResponse.begin(), lowerResponse.end(), lowerResponse.begin(), ::tolower);
    
    if (lowerResponse.find("yes") != string::npos) {
        cout << "\nThis is the happiest day of my life! (Celebration)\n"; // Replaced emoji with text
    } else {
        cout << "\nI understand. I'll always cherish what we have.\n";
    }
    
    // Wait for a key press before closing
    cout << "\nPress Enter to exit...";
    cin.get();
    
    return 0;
}
