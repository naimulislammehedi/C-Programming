// An operator is a symbol that tells C to perform an operation on one or more values

#include <stdio.h>

int main() {

    int a = 10;
    int b = 3;

    // Arithmetic Operators
    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a / b);
    printf("Remainder = %d\n", a % b);

    // Assignment Operators
    int number = 10;

    number += 5;
    printf("After += 5: %d\n", number);

    number -= 5;
    printf("After -= 5: %d\n", number);

    number *= 5;
    printf("After *= 5: %d\n", number);

    number /= 5;
    printf("After /= 5: %d\n", number);

    // Relational / Comparison Operators
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    // Logical Operators: used to combine conditions
    int age = 25;

    printf("Age is between 18 and 30: %d\n", age >= 18 && age <= 30);
    printf("Age is less than 1 or greater than 20: %d\n", age < 1 || age > 20);

    return 0;
}