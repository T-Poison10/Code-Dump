#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("name.txt", "w+");
    fputc('c', fptr);
    fclose(fptr);
}