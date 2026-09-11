// Addition
// Write a C program that:
    // Takes two integers from the user.
    // Adds them.
    // Prints the result.

// Example:
    // Enter number 1: 10
    // Enter number 2: 20
    // Sum = 30
    
#include <stdio.h>

int main() {
    int num1; 
    int num2; 

    printf("Enter number 1:"); 
    scanf("%d", &num1); 

    printf("Enter number 2:"); 
    scanf("%d", &num2);

    printf("Sum = %d\n", num1 + num2); 

    return 0; 
}



