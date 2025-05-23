#include <iostream>
using namespace std;

int main() {
    string name, usn;
    float subject1, subject2, subject3, subject4;
    
    cout << "Enter student name: ";
    getline(cin, name);
    
    cout << "Enter USN: ";
    getline(cin, usn);
    
    cout << "\nEnter marks for 4 subjects:\n";
    cout << "Subject 1: ";
    cin >> subject1;
    cout << "Subject 2: ";
    cin >> subject2;
    cout << "Subject 3: ";
    cin >> subject3;
    cout << "Subject 4: ";
    cin >> subject4;
    
    cout << "\n----- Student Details -----\n";
    cout << "Name: " << name << endl;
    cout << "USN: " << usn << endl;
    cout << "Subject 1 Marks: " << subject1 << endl;
    cout << "Subject 2 Marks: " << subject2 << endl; 
    cout << "Subject 3 Marks: " << subject3 << endl;
    cout << "Subject 4 Marks: " << subject4 << endl;
    
    return 0;
}

