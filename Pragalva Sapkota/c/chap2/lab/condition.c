#include <stdio.h>
int main()
{
    int x,y,sum,diff;
    printf("Input the value of x:");
    scanf("%d",&x);
    printf(" \nInput the value of y:");
    scanf("%d\n",&y);
   sum= (x>y) ? x+y:x-y;
   printf("%d",sum);
   return 0;
   
}
