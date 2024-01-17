#include<stdio.h>
int main(){
    int maxNum;
    printf("Enter the range of your number");
    scanf("%d",&maxNum);

    
    for (int num = 2; num <= maxNum; num++) {
        int isPrime = 1;  // Assume the current number is prime
        
     for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;  // If divisible, set isPrime to 0 (false)
                break;
            }
        }

        if (isPrime) {
            printf("%d\n", num);
        }

 }
}