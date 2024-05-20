#include <stdio.h>
#include <stdlib.h>
int fun1();
int fun(int fun1(), int x);
int main()
{
    int *a;
    a = (int *)malloc(10 * sizeof(int));    
    printf("The memoey of malloc is %u", a);
}