#include<stdio.h>
#define d 5
int main()
{
 int arr[d],count=0;
 for (int i = 0 ;i<d;i++ )
 {
    scanf("%d",&arr[i]);
 }
for (int i = 0 ;i<d;i++ )
 {
    if (arr[i]%2 == 0)
    {
        count++;
    }
 }
 printf("No of even digits is = %d",count);
}