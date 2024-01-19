#include<stdio.h>


int main()
{
   int num, fact=1, temp ;
   printf("Enter the number:");
    scanf("%d",&num);
    temp = num;
    while (num<0)
    {
        printf("Enter the number:");
        scanf("%d",&num);
        temp = num;
    }
    if (num == 0)
    {
        printf("The factorial of 0 is 1");
    }
    else if (num>0){
        while (num!=1)
        {
        fact = fact * num;
        num --;
        }
        printf("The factorial of %d is %d",temp,fact);
   }
   


}