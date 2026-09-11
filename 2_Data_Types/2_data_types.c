// A data type tells C what kind of data a variable can store

// The computer needs to know:
// What kind of value you are storing
// How much memory may be needed
// How that value should be handled


// Main Basic Data Types
// int - whole numbers - 20
// float - decimal numbers - 5.8
// double - more precise decimal numbers - 3.141592
// char - one character - 'A'
// void - no value - void function()


// int: int means integer. It is used for whole numbers.
// int age = 20;
// int marks = 85;
// int year = 2026;


// float: float is used for decimal numbers
// float height = 5.8;
// float price = 99.99;
// float temperature = 32.5;


// char: char is used to store one character
// char grade = 'A';
// char symbol = '#';
// char letter = 'M';


// void: void basically means no value
// void hello() {
//     printf("Hello");
// }


// Data Types and printf()
#include <stdio.h>

int main() {

    int age = 20;
    float height = 5.8;
    double pi = 3.1415;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %f\n", height);
    printf("Pi: %f\n", pi);
    printf("Grade: %c\n", grade);

    return 0;
}

