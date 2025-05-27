#include <iostream>
#include <string>
using namespace std;

// Base class Person
class Person {
private:
    string name;
    int age;
    string gender;

public:
    // Default constructor
    Person() {
        name = "";
        age = 0;
        gender = "";
    }

    // Parameterized constructor
    Person(string n, int a, string g) {
        name = n;
        age = a;
        gender = g;
    }

    // Setters
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void setGender(string g) { gender = g; }

    // Getters
    string getName() { return name; }
    int getAge() { return age; }
    string getGender() { return gender; }

    // Input method
    void inputBasicDetails() {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Gender: ";
        cin.ignore();
        getline(cin, gender);
    }

    // Display method
    void displayBasicDetails() {
        cout << "\nBasic Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};

// Derived class Student
class Student : public Person {
private:
    int rollNumber;
    string classGrade;
    string section;

public:
    // Constructor using initialization list
    Student(string n = "", int a = 0, string g = "", int roll = 0, 
            string grade = "", string sec = "") : Person(n, a, g) {
        rollNumber = roll;
        classGrade = grade;
        section = sec;
    }

    void inputStudentDetails() {
        inputBasicDetails();
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Class Grade: ";
        cin.ignore();
        getline(cin, classGrade);
        cout << "Enter Section: ";
        getline(cin, section);
    }

    void displayStudentDetails() {
        displayBasicDetails();
        cout << "Student Details:" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Class Grade: " << classGrade << endl;
        cout << "Section: " << section << endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
private:
    int employeeId;
    string subject;
    string department;

public:
    // Constructor using initialization list
    Teacher(string n = "", int a = 0, string g = "", int empId = 0,
           string sub = "", string dept = "") : Person(n, a, g) {
        employeeId = empId;
        subject = sub;
        department = dept;
    }

    void inputTeacherDetails() {
        inputBasicDetails();
        cout << "Enter Employee ID: ";
        cin >> employeeId;
        cout << "Enter Subject: ";
        cin.ignore();
        getline(cin, subject);
        cout << "Enter Department: ";
        getline(cin, department);
    }

    void displayTeacherDetails() {
        displayBasicDetails();
        cout << "Teacher Details:" << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Subject: " << subject << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student student;
    Teacher teacher;

    cout << "Enter Student Details:" << endl;
    cout << "=====================" << endl;
    student.inputStudentDetails();

    cout << "\nEnter Teacher Details:" << endl;
    cout << "=====================" << endl;
    teacher.inputTeacherDetails();

    cout << "\nDisplaying Student Details:" << endl;
    cout << "=========================" << endl;
    student.displayStudentDetails();

    cout << "\nDisplaying Teacher Details:" << endl;
    cout << "=========================" << endl;
    teacher.displayTeacherDetails();

    return 0;
}


