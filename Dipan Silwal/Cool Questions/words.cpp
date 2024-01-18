#include<stdio.h>
#include<string.h>
#define d 500
main()
{
 int i,count=0,len;
 char str[d];
 printf("Enter String to get First Small Letter of String\n");
 gets(str);
 len=strlen(str);
 for(i=0;i<=len;i++)
 {
  if(str[i]>='a' && str[i]<='z')
  {
   printf("The First Small Letter is %c\n",str[i]);
   count++;
   break;
  }
 }
 if(count!=1)
 printf("There is no small letter\n");
}
