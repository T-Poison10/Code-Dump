#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],c;
    int i = 0;
    while(c!= '\n')
    {
        c=getchar();
        str[i]=c;
        i++;
    }
    str[i]='\0';
    printf("%s",str);

}