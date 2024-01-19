#include <stdio.h>
int main()
{
    int num ,hold , rem,count=0,i;
    float sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    hold = num;
    while(hold!= 0 )
    {
        count++;
        hold = hold/10;
    }
    for (i=0; i < count; i++)
    {
        rem = num %10;
        sum = sum + rem;
        num = num/10;
    }
    printf("Average of sum of digits is:%.2f",sum/count);
}