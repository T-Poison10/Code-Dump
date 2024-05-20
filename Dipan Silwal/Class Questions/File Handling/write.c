#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fptr;
    fptr = fopen("name.txt", "r");
    char input[10];
    char c;
    c = getchar();
    while (c != '\n')
    {
        fputc(c, fptr);
        c = getchar();
    }

    fclose(fptr);
}