//ask user to input number and print in array

#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    for  (i=0; i<5; i++)
    {
        printf(" \n Enter the value ");
        scanf("%d",&arr[i]);
        printf("%d",arr[i]);
    }
}