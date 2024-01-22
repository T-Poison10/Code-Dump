#include <stdio.h>
int main()
{
    int a;
    printf("enter the year ");
    scanf("%d", &a);
    if ((a % 100 == 0 && a % 400 == 0) || (a % 4 == 0 && a%100!=0))
    {
        printf("the year %d is a leap year", a);
    }

    else
    {
        printf("the year %d not is a leap year", a);
    }
}
