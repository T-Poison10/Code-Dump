//Wap to find the max and min num in an array

#include<stdio.h>
int main()
{
    int array[5];
    int i,max,min;
    for ( i = 0;i<5; i++)
    {
        printf("Enter the value:");
        scanf("%d",&array[i]);
    }
    max = array[0];
    min = array[0];
    for (i = 0; i < 5; i++)
    {
        if (array[i]>max)
        {
        max=array[i];
    }
        if (array[i]<max)
        {
            min=array[i];
        }
    }
    printf("The biggest no is %d \n",max);
    printf("The smallest no is %d", min);

}