#include <stdio.h>
int main()
{
    int arr[5], *ptr;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number:");
        scanf("%d", (ptr + i));
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("Numbers are:%d\n", *(ptr + i));
    }
}