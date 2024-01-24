#include <stdio.h>
int main()
{
    int arr[5];
    int max=arr[0];
    int i=1;
    for (int i = 0; i < 5; i++){
        printf(" enter a number ");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
        if (arr[i] > max)
        {
            max = arr[i];
        }
    printf( "the max number is %d" , max);
return 0;
}