#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *fprt;
    fprt = fopen("dipan.txt", "w");
    char name[30] = "dipanismyname";
    int i = 0;
    while (name[i] != '\0')
    {
        fputc(name[i], fprt);
        i++;
    }
    fclose(fprt);
}