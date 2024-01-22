#include<stdio.h>
#define d 5
int main()
{
 int arr[d],sum=0;
 for (int i = 0 ;i<d;i++ )
 {
    scanf("%d",&arr[i]);
 }
for (int i = 0 ;i<d;i++ )
 {
    sum = sum + arr[i];
 }
 int size = sizeof(arr);
 printf("%d",sum);
}