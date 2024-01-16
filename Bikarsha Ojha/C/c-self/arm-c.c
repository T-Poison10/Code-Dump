#include <stdio.h>
int main() {
    int num, numtwo, rem, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    numtwo = num;

    while (numtwo != 0) {
        rem = numtwo % 10;
        
       result += rem * rem * rem;
        
       numtwo /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
