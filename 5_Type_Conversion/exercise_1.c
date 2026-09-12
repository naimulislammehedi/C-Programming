// Write a C program that:
// Create two integer variables:
// int a = 10;
// int b = 4;
// Print the result of integer division.

// Expected:
// Integer division = 2

// Use type casting to convert a to float and print the result of float division.

// Expected:
// Float division = 2.500000

#include <stdio.h>

int main() {
    int a = 10; 
    int b = 4; 

    printf("Integer Division = %d\n", a / b); 

    printf("Float division = %f\n", (float) a / b); 

    return 0; 
}