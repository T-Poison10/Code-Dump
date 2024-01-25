#include<stdio.h>
int main()
{
    int i,temp=0, n;
    printf("Enter the no of entries you want:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %dst index:",i+1);
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        if(arr[i]>temp)
        {
            temp = arr[i];
        }
    }
    printf("%d",temp);
    
}