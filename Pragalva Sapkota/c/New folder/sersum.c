#include<stdio.h>
int main()
{
     int sum=1,num,ssum=0;
    printf("Enter the no of term");
    scanf("%d",&num);

    for (int i=1; i<num ; i++)
    {
        printf("%d\t",sum);
        ssum=ssum+sum;
        sum=sum+i;
        
    }
    printf("%d \t",sum);
    printf("\n%d",ssum);
    return 0;
}