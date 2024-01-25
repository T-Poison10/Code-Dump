//ask user to input number and add 

#include<stdio.h>
int main()
{
    int arr[5];
    int i,sum=0;
    for  (i=0; i<5; i++)
    {
        printf("Enter the value");
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
        
    }
    printf("Sum is %d",sum);
}