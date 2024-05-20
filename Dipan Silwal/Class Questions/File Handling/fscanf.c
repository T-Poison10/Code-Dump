#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fptr;
    char str[100], str1[100];
    fptr = fopen("dipan.txt", "r");
    fscanf(fptr, "%s %s", str, str1);
    puts(str);
    puts(str1);
}