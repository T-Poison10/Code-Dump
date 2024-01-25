#include<stdio.h>
int main()
{
    int number,i,fact;
    fact=i=1;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&number);
        while (number<0)
        {
            printf("Enter your number again");
            scanf("%d",&number);

        }     
     if (number>0)
    {
    
        while(number!=1)
        {
            fact*=number;
            number--;
        }
    printf("The Factorial  is : %d",fact);
    return 0;
}
}