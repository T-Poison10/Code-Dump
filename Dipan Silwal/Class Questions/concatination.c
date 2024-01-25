#include <stdio.h>
#include<string.h>
#define len 100
int main()
{
    char str1[len],str2[len],ch;
    int i = 0,len1=0 ;
    printf("Enter first string");
    gets(str1);
    printf("Enter second string");
    gets(str2);
    len1 = strlen(str1);
    while (i <= strlen(str2))
    {
        ch = str2[i];
        str1[len1] = ch;
        len1++;
        i++;
    }
    puts(str1);
}
