#include <iostream>
#include <string>
using namespace std;

// Base class Person
class Person {
protected:
    string name;
    int age;
    float weight;

public:
    Person(string n, int a, float w) : name(n), age(a), weight(w) {
        cout << "Person constructor called" << endl;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Weight: " << weight << " kg" << endl;
    }
};

// Derived class Student inheriting from Person
class Student : public Person {
private:
    int rollNumber;

public:
    Student(string n, int a, float w, int roll) : Person(n, a, w), rollNumber(roll) {
        cout << "Student constructor called" << endl;
    }

    void displayStudentDetails() {
        displayPersonDetails();
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
    // Get input from user
    string name;
    int age;
    float weight;
    int roll;

    cout << "Enter student details:" << endl;
    cout << "Name: ";
    getline(cin, name);
    cout << "Age: ";
    cin >> age;
    cout << "Weight (kg): ";
    cin >> weight;
    cout << "Roll Number: ";
    cin >> roll;

    // Create student object with user input
    Student student(name, age, weight, roll);
    
    cout << "\nStudent Details:" << endl;
    student.displayStudentDetails();

    return 0;
}
