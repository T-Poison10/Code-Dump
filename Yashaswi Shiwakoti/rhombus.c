#include<stdio.h>
int main()
{
    int size;
    printf("enter the size of the rhombus: ");
    scanf("%d",&size);
    for(int i=1;i<=size;i++)
{
    for (int j=1;j<=size-i;j++)
    {
        printf(" ");
    }
    for(int k=1;k<=size;k++)
    {
        printf("* ");
    }
    printf("\n");
}
return 0;
}