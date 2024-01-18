#include <stdio.h>
int main()
{
    int num,sum=0,temp=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num!=0)
    {
        temp = num%10;
        sum = sum+temp;
        num = num/10;
    }
    printf("%d",sum);
}