//binary of number

#include<stdio.h>
int main()
{
    int arr[100];
    int num,i=0,rem,count=0;
    printf("Enter the no that needs to be converted:");
    scanf("%d",&num);
    while (num!=0)
    {
        rem=num%2;
        arr[i]=rem;
        // printf("%d \n",arr[i]);
        num=num/2;
        i++;
        count++;
        
    }
    for (i = count-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    
    

}