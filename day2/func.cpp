#include <stdio.h>

// Function declaration/prototype
int add(int a, int b);
void printMessage();

// Function definitions
int add(int a, int b) {
    return a + b;
}

void printMessage() {
    printf("Hello from function!\n");
}

int main() {
    int num1 = 10, num2 = 20;
    
    // Function calls
    printMessage();
    
    int result = add(num1, num2);
    printf("Sum of %d and %d is: %d\n", num1, num2, result);
    return 0;
}
