#include <stdio.h>
int main()
{
    int count=0 , num;
    printf("Enter a number:");
    scanf("%d",&num);
    do
    {
        count++;
        num = num/10;
    } while (num!=0);

    printf("Number of digits are:%d",count);
}