#include <iostream>
using namespace std;

// Function declarations
void printInfo(string name, int age);
int power(int base, int exp = 2); // Function with default parameter
void printNumbers(int count = 5); // Function with default parameter
void printDetails(string name = "Unknown", int age = 0, string city = "N/A"); // Multiple default parameters

// Function definitions
void printInfo(string name, int age) {
    cout << "Name: " << name << ", Age: " << age << endl;
}

int power(int base, int exp) {
    int result = 1;
    for(int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

void printNumbers(int count) {
    for(int i = 1; i <= count; i++) {
        cout << i << " ";
    }
    cout << endl;
}

void printDetails(string name, int age, string city) {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
}

int main() {
    // Testing functions with parameters
    printInfo("John", 25);
    
    // Using default parameters
    cout << "Square of 5: " << power(5) << endl;    // Uses default exp = 2
    cout << "5 to power 3: " << power(5, 3) << endl; // Overrides default
    
    printNumbers();  // Uses default count = 5
    printNumbers(3); // Overrides default
    
    // Testing multiple default parameters
    printDetails(); // All defaults
    printDetails("Alice"); // Only name provided
    printDetails("Bob", 30); // Name and age provided
    printDetails("Carol", 28, "New York"); // All parameters provided
    
    return 0;
}
