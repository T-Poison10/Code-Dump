#include<stdio.h>
int main()
{
    int i , j , count = 0 , prime=0;
    for (i = 1;i<=10;i++)
    {
        count=0;

        for (j=1;j<i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if (count<2)
        { 
            prime = prime + i;
            printf("Sum of prime number form 1-10 = %d\n",prime);
        }
    }
    // printf("Sum of prime number form 1-10 = %d",prime);
}