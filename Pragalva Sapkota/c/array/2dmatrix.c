//3*3 matrix 2-D arrays

#include<stdio.h>
int main()
{
    int arr[3][3];
    int i,j;
    for (i = 0; i<3; i++)
    {
        for(j=0;j<3;j++)
        {
        printf("Enter the value:");
        scanf("%d",&arr[i][j]);
        
        }
    
    }
    for ( i = 0; i<3; i++)
    {
        for (j= 0;j<3; j++)
        {
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
        
    }
    
}