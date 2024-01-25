#include <stdio.h>
#include <string.h>
int main()
{
    char str [100] ;
    char  ch ='h';
    int i=0;
    int size=0;
    printf("enter your name \t");
    while (ch!='\n'){
        str[i]=ch;
        size++;
        i++;
    }
    printf("the length is %d", size);
    return 0;
}