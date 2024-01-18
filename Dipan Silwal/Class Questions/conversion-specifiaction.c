#include<stdio.h>
int main()
{
    char name[100];
    printf("Enter a string:");
    scanf("%[A-Z] %[^\n]",name);
    printf("Your name is : %s",name);
}