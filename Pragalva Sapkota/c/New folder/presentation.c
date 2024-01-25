//Write a C program to calculate the power of a number raised to a given exponent using a while loop.

#include <stdio.h>

int main() {
//variable declaration
    int base, exponent, result = 1;
    //user input
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    //while loop
    while (exponent > 0) {
        result *= base;
         printf("Result: %d\n", result);
        exponent--;
    }
    //Result Output:
    printf(" Final Result: %d\n", result);

    return 0;
}