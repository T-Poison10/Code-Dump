#include <stdio.h>
int main()
{
    int p,r,y;
    float si;
    printf("Enter principal, rate, and number of years:");
    printf("Enter  rate:");
    printf("Enter number of years:");
    scanf("%d",&p);
    scanf("%d",&r);
    scanf("%d",&y);
    si=(p*y*r) / 100;
    printf("\n The si is %f",si );
    return 0;
}