#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll_number;
    string class_name;
    float marks;

public:
    // Constructor
    Student(string n, int roll, string c_name, float m) {
        name = n;
        roll_number = roll;
        class_name = c_name;
        marks = m;
    }

    // Function to calculate and return grade
    string calculateGrade() {
        if (marks >= 90) return "A+";
        else if (marks >= 80) return "A";
        else if (marks >= 70) return "B";
        else if (marks >= 60) return "C";
        else if (marks >= 50) return "D";
        else return "F";
    }

    // Function to display student details
    void displayDetails() {
        cout << "\nStudent Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Class: " << class_name << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    string name, class_name;
    int roll;
    float marks;

    cout << "Enter Student Name: ";
    getline(cin, name);
    
    cout << "Enter Roll Number: ";
    cin >> roll;
    cin.ignore();
    
    cout << "Enter Class: ";
    getline(cin, class_name);
    
    cout << "Enter Marks: ";
    cin >> marks;

    // Create student object
    Student student(name, roll, class_name, marks);
    
    // Display student information
    student.displayDetails();

    return 0;
}
