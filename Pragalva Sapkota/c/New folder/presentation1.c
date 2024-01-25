#include<stdio.h>
int main()
{
    int  base,exponential,result=1;
    printf("Enter the base:");
    prinf("\nEnter the exponential:");
    scanf("%d %d",&base,exponential);
    while (exponential>0)
    {
        result*=base;
        exponential--;
    }
    printf("The final result is:",result);
}