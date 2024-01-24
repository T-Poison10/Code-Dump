//ASK USER TO INPUT NUMBER THEN PRINT SUM
#include<stdio.h>
int main()
{
    int num,x;
    int sum=0;

    printf("Enter the number: \n");
    scanf("%d",&num);
    while (num!=0)
    {
        x=num%10;
        sum=sum+x;
        printf("%d \n",sum);
        num=num/10;
    }
    printf("%d",sum);
}