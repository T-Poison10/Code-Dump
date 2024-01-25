#include<stdio.h>
int main()
{
    int num,x=0;
    printf("Enter the number");
    scanf("%d",&num);
    do
    {
        x++;
        num=num/10;
    } while (num!=0);
    printf("%d",x);
}