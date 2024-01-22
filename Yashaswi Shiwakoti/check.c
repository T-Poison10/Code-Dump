#include <stdio.h>
int main()
{
    int a,b;
    printf("enter 2 number : ");
    scanf("%d,%d", &a,&b);
    if ( a>b)
    {
        printf("the number %d is greater than %d",a,b);
    }
   if (b>a)
    {
        printf("the number %d is greater than %d",b,a);
    }
    else {
        printf("please enter different numbers");
    }
    printf("thank you");
    return 0;
}