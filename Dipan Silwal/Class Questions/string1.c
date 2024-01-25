#include <stdio.h>
#include<string.h>
#define dip 100
int main()
{
    char str[dip];
    int len=0,i=0;
    gets(str);
    puts(str);
    while (str[i]!='\0')
    {
        len++;
        i++;
    }
    printf("%d",len);
}