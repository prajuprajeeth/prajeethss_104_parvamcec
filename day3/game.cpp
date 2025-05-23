#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string name;
    int position;

public:
    Car(string n) : name(n), position(0) {}

    void move() {
        position += 1;
    }

    int getPosition() const {
        return position;
    }

    string getName() const {
        return name;
    }

    void displayCar() const {
        for (int i = 0; i < position; i++) {
            cout << " ";
        }
        cout << name << " *" << endl;
    }
};

int main() {
    cout << "Welcome to Simple Car Racing Game!" << endl;
    
    string p1Name, p2Name;
    cout << "\nEnter name for Player 1's car: ";
    getline(cin, p1Name);
    cout << "Enter name for Player 2's car: ";
    getline(cin, p2Name);
    
    Car player1(p1Name);
    Car player2(p2Name);
    
    cout << "\nPress Enter to move cars. First to reach 20 spaces wins!" << endl;
    cout << "Race starts now!" << endl;
    
    bool raceFinished = false;
    const int finishLine = 20;
    
    while (!raceFinished) {
        // Display race track
        cout << string(40, '=') << endl;
        player1.displayCar();
        player2.displayCar();
        cout << string(40, '=') << endl;
        
        // Wait for Enter key
        cin.get();
        
        // Move cars
        player1.move();
        player2.move();
        
        // Check for winner
        if (player1.getPosition() >= finishLine || player2.getPosition() >= finishLine) {
            raceFinished = true;
            if (player1.getPosition() >= finishLine && player2.getPosition() >= finishLine) {
                cout << "\nIt's a tie!" << endl;
            } else if (player1.getPosition() >= finishLine) {
                cout << "\n" << player1.getName() << " wins!" << endl;
            } else {
                cout << "\n" << player2.getName() << " wins!" << endl;
            }
        }
    }
    
    cout << "\nGame Over!" << endl;
    return 0;
}
