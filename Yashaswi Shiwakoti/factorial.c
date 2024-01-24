#include <stdio.h>
int main()
{
    int n, t;
    int f = 1;
    printf("enter a number ");
    scanf("%d", &n);
    if (n < 0)
    {
        t = n;
        while (t <= 0)
        {
            printf("enter a positive natural number ");
            scanf("%d", &t);

            t++;
        }
    }
    else if (n > 0 && n != 0)
    {
        while (n != 0)
        {
            f = f * n;
            n--;
        }
        printf("the factorial is %d", f);
    }
    else
    {
        printf("the factorial is 1 ");
    }
}
