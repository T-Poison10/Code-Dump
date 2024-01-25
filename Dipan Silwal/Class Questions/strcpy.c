//PRAGALVA IS GAYEST MF ALIVE
#include<stdio.h>
#include<string.h>
#define len 100
int main()
{
    char strsrc[len],strdest[len],ch;
    int i = 0;
    printf("Enter a string:");
    gets(strsrc);
    while (i <= strlen(strsrc))
    {
        ch = strsrc[i];
        strdest[i]= ch;
        i++;
    }
    puts(strdest);

}