#include<stdio.h>
int evenser(int n);
int oddser(int n);
int main()
{
   int n;
   printf("Enter the no of index:");
   scanf("%d",&n);
   int arr[n],temp[0],hold[0],size,i,j,count=0;
   if(n%2==0)
   {
      size=evenser(n);
   }
   if(n%2!=0)
   {
      size = oddser(n);
   }
   for (i=0;i<n;i++)
   {
      printf("Enter value:");
      scanf("%d",&arr[i]);
   }
   for (i=n;i>=0;i--)
   {
      temp[0] = arr[i-1];
      printf("%d\n",temp);
      printf("%d",arr[i]);
      for (j = count ;j<count;count++)
      {
         hold[0] = arr[j];
         arr[j]=temp[0];
      }
      arr[i-1]= hold[0];
   }
   printf("Sorted array:\n");
   for (i=0;i<n;i++)
   {
      printf("%d\n",arr[i]);
   }
}
int evenser(int n)
{
   int ser=0 ;
   for (int i = 2 ;i<=n;i+=2)
   {
      ser++;
   }
   return ser;
}
int oddser(int n)
{
   int ser=0 ;
   for (int i = 3 ;i<=n;i+=2)
   {
      ser++;
   }
   return ser;
}