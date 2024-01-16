#include <stdio.h>

int main() {
    int a; 
    int sum = 0;
    
    printf("Enter Your Number: \n");
    scanf("%d", &a);
    
    while (a != 0) {
        int num1 = a % 10;
        printf("last digit is: %d\n", num1); /*LAST DIGIT PRINT*/
        sum = num1 + sum;
        a = a/10;  /*REMOVES LAST DIGIT OF A*/
    }
    
    printf("\nSUM= %d", sum);
    
    return 0;
}
