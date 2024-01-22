#include <stdio.h>
int main()
{
    int n, t, k;
    int f = 1;
    int re = 1;
    printf("enter a number ");
    scanf("%d", &n);

    if (n > 0)
    {
        t = n;
        while (t != 0)
        {
            f = f * n;
            t--;
        }
        printf("the factorial is %d", f);
    }
    else if (n == 0)
    {
        printf("the factorial is 1");
    }
    else
    {
        k = n;
        while (k < 0)
        {

            printf("enter a positive natural number ");
            scanf("%d", &k);
            if (k > 0)
            {
                while( k!=0){
                re = re * k;
                k--;
                }
                printf("the factorial is %d", re);
            }
            k++;
        }
    }
}
