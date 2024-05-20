#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("fprintf.txt", "w");
    int a = 10, b = 3;
    fprintf(fptr, "%d %d", a, b);
    fclose(fptr);
}
