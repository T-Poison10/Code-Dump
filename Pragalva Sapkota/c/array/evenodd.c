//ask user to input number and figure out even and odd

#include<stdio.h>
int main()
{
    int arr[5];
    int i, count=0;
    for  (i=0; i<5; i++)
    {
        printf("Enter the value");
        scanf("%d",&arr[i]);
        if (arr[i]%2==0)
        {
            count++;
        }
        
    }
      printf("No of even digits is %d",count); 
}