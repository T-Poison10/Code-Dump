#include <stdio.h>

int main() {
    int base, exp;
    long long int result = 1;  // Changed data type to long long int
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    // Handle negative exponents
    if (exp < 0) {
        printf("Exponentiation with negative exponents is not supported.\n");
        return 1;  // Exit the program with an error code
    }

    // Calculate exponentiation
    while (exp != 0) {
        result *= base;
        --exp;
    }
    printf("Answer = %lld\n", result);  // Updated format specifier

    return 0;
}
