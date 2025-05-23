#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    float gpa;

public:
    // Constructor
    Student(string n, int a, float g) {
        name = n;
        age = a;
        gpa = g;
    }

    // Member functions
    void displayInfo() {
        cout << "Student Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "GPA: " << gpa << endl;
    }

    void updateGPA(float newGPA) {
        gpa = newGPA;
        cout << "GPA updated to: " << gpa << endl;
    }
};

int main() {
    // Creating student objects
    Student student1("John Smith", 20, 3.8);
    Student student2("Mary Johnson", 19, 3.9);

    // Displaying student information
    cout << "First Student:" << endl;
    student1.displayInfo();
    
    cout << "\nSecond Student:" << endl;
    student2.displayInfo();

    // Updating GPA
    cout << "\nUpdating first student's GPA:" << endl;
    student1.updateGPA(3.9);

    return 0;
}
