#include<stdio.h>
int main()
{
    int num,fact=1;
    printf("Enter a positive no");
    scanf("%d",&num);
    while (num<0)
    {
        printf(" INPUT INVALID \n Enter a positive no");
        scanf("%d",&num);
    }
    
    while (num>0)
    {
        fact*=num;
        num--;  
    }
    printf("FACTORIAL IS: %d",fact);
}