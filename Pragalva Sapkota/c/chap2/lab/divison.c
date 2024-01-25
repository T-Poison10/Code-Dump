#include <stdio.h>
int main()
{
    int num;
    int remainder;
    printf("Enter the 5 digit value: ");
    scanf("%d",&num);
    remainder= num % 3;
    printf("\n The remainder is:%d",remainder);
    return 0;
}