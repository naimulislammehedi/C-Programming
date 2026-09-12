// Type Conversion in C 
// Type conversion means changing a value from one data type to another data type. 

#include <stdio.h> 

int main() {
    int a = 10; 
    int b = 30; 

    // Integer division 
    printf("Integer division = %d\n", a / b);
    
    // Type conversion 
    printf("Float division = %f\n", (float)a /b); 

    // Float to int 
    float number = 10.8; 
    int result = (int) number; 

    printf("Float to int = %d\n", result); 

    return 0; 

}

