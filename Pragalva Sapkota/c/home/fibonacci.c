#include<stdio.h>
int main()
{
    int first=0,sec=1,next,i=1,number;
    printf("Enter number of terms");
    scanf("%d",&number);
    while (i<=number)
    {
        next=first+sec;
        first=sec;
        sec=next;
        i++;
    }
    printf("%d",first);
}