// A variable is named storage in computer memory that holds a value. Think of a variable as a box with a name: 

// Declaring a variable
// int age; 

// Giving a value
// age = 20; 

// or you can do both at once. This is called initialization. 
// int age = 20;

#include <stdio.h> // include c programming standard input / output library 

// int main(): Program starting point 
int main() {
    int age = 20; 
    float height = 5.8; 
    char grade = 'A'; 

    printf("%d\n", age); 
    printf("%f\n", height); 
    printf("%c\n", grade); 

    // variable can change
    age = 21; 
    printf("%d\n", age); 

    return 0; 
}

