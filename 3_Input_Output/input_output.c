#include <stdio.h>

int main() {
    // Output
    printf("Hello, World!\n");

    // Printing variables
    int age = 25;

    printf("Age: %d\n", age);

    // Input
    int num1;
    int num2;

    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    // Addition
    printf("Sum = %d\n", num1 + num2);

    return 0;
}