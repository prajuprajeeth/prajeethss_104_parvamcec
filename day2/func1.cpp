#include <iostream>
using namespace std;

// Function declaration
void greet();
int add(int x, int y); 
float divide(float a, float b);
bool isEven(int num);

// Function definitions
void greet() {
    cout << "Hello! Welcome to the program." << endl;
}

int add(int x, int y) {
    return x + y;
}

float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    }
    cout << "Error: Division by zero!" << endl;
    return 0;
}

bool isEven(int num) {
    return (num % 2 == 0);
}

int main() {
    // Testing the functions
    greet();
    
    int sum = add(10, 20);
    cout << "Sum: " << sum << endl;
    
    float quotient = divide(15.5, 2.0);
    cout << "Division result: " << quotient << endl;
    
    int number = 4;
    if (isEven(number)) {
        cout << number << " is even" << endl;
    } else {
        cout << number << " is odd" << endl;
    }
    
    return 0;
    
}
