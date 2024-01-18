#include <stdio.h>
int main()
{

    int i,sum = 1,n,ser=0;
    printf("Enter nth term:");
    scanf("%d",&n);
    for(i = 1 ;i<=n ;i++)
    {
        printf("%d\t",sum);
        ser = ser +sum;
        sum = sum + i;
        
        printf("\n");
        
        
    }
    printf("Series sum is %d",ser);
    
}