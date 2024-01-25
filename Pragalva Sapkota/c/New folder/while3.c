#include<stdio.h>
int main()
{
    int i=2, sum=0;

    while (i<=10)
    {
      sum=i+sum;
      printf("%d\n",sum);
      i+=2;
      
    }
    // printf("%d",sum);
    return 0;
}