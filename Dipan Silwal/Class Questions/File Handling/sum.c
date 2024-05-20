#include <stdio.h>
int main()
{
    int arr1[3][3], arr2[3][3], sum[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("First array");
            scanf("%d", &arr1[i][j]);
            printf("Second array");
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}
