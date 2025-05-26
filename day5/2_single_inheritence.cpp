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
    Student student("John", 20, 65.5, 101);
    cout << "\nStudent Details:" << endl;
    student.displayStudentDetails();
    
    return 0;
}
