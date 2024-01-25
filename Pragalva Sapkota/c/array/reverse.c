#include<stdio.h>
int main()
{
    int arr[5],rem,n=4;
    for(int i=0;i<5;i++)
    {
        printf("Enter the elements: ");
        scanf("%d",&arr[i]);
    }
     n=arr[n];
    while(n>0){
    rem=n;
    n--;
    printf("%d\n",rem);
    }
    return 0;

}