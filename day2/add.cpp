#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    int sum;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("Enter third number: ");
    scanf("%d", &num3);
    
    printf("Enter fourth number: ");
    scanf("%d", &num4);
    
    sum = num1 + num2 + num3 + num4;
    
    printf("The sum of %d, %d, %d and %d is: %d\n", num1, num2, num3, num4, sum);
    
    return 0;
}
