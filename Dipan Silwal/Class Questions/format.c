#include <stdio.h>
#include<conio.h>
int intformat(int x , int y);
float floatformat(float x , float y);
void stringformat();
int main()
{
    intformat(12,53);
    floatformat(11.1,45.565);
    stringformat();
    return 0;
}
int intformat(int x , int y)
{
    printf("%3d\n%5d\n",x,y);
    return 0;
}
float floatformat(float x , float y)
{
    printf("%2.2f\n%3.3f\n",x,y);
    getch();
}
void stringformat()
{
    char x[100];
    scanf("%s",x);
    printf("%8.3s\n",x);
    printf("%2s",x);
}

