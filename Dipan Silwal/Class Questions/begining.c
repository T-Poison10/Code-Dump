#include <stdio.h>
int main()
{
    int date;
    char month[8];
    printf("Ente date and month:\n");
    scanf("%d/%s",&date,month);
    printf("Date and month = %d/%s",date,month);
    return 0;
}