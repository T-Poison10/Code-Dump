#include <stdio.h>
int main()
{
    int j, sum = 0;
    j = 1;

    while (j <= 10)
    {
        j = j+1;
        if (j%2 == 0){
            sum = sum + j;
            
            printf(" %d", j);
        }
        
    }
     
    printf("\nThe SUM is : %d\n", sum);
}