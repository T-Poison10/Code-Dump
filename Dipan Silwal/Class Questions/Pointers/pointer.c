#include <stdio.h>
int main()
{
    int num = 10;
    int *ptr = &num;
    int **ptr2 = &ptr;
    printf("The address of num is %d\n", ptr);
    printf("The value of ptr is %d\n", *ptr2);
    printf("The value of num using ptr2 is %d\n", **ptr2);
    **ptr2 = 20;
    printf("The value of num using  is %d\n", *ptr);
    printf("%d\n", ptr);
    ptr = ptr + 2;
    printf("%d\n", ptr);
    printf("The value of num is %d", *ptr);
}