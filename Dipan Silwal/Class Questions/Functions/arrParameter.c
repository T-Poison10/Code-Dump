#include <stdio.h>
void check(int x[]);
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    check(arr);
    for (int i = 0; i < 5; i++)
    {
        printf("Changed array:%d\n", arr[i]);
    }
}
void check(int x[])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        x[i] = x[i] + 1;
    }
}