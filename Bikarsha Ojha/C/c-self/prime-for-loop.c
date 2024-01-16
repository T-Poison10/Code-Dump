#include <stdio.h>

int main() {
    int maxNum;
    // Input the maximum value from the user
    printf("Enter the maximum value for the range: ");
    scanf("%d", &maxNum);

    printf("Prime numbers between 1 and %d:\n", maxNum);

    for (int num = 2; num <= maxNum; num++) {
        int isPrime = 1;  // Assume the current number is prime

        // Check if the current number is divisible by any number from 2 to num/2
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;  // If divisible, set ipassPrime to 0 (false)
                break;
            }
        }

        // If the current number is prime, print it
        if (isPrime) {
            printf("%d\n", num);
        }
    }

    return 0;
}
