#include<iostream>
using namespace std;

class student{
    public:
        string name;
        int roll_num;
};

int main(){
    // Create student object and pointer
    student *s1 = new student;
    
    // Get input for student details
    cout << "Enter student name: ";
    cin >> s1->name;
    cout << "Enter roll number: ";
    cin >> s1->roll_num;

    // Display student details using pointer
    cout << "\nStudent Details:" << endl;
    cout << "Name: " << s1->name << endl;
    cout << "Roll Number: " << s1->roll_num << endl;

    // Integer pointer example
    int *num = new int;
    cout << "\nEnter a number: ";
    cin >> *num;
    cout << "The number you entered is: " << *num << endl;
    cout << "Address of number: " << num << endl;

    // Clean up dynamic memory
    delete s1;
    delete num;
    
    return 0;
}