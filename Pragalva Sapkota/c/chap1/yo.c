#include <stdio.h>
int main()
{
    char name[200];
    int age;
    char gender;
    printf("Enter your name:");
    scanf("%s", name);
    printf(" \nEnter your Age:");
    scanf("%d", &age);
    printf("\nEnter your gender:");
    scanf(" %c \n", &gender);
    printf("  your name is : %s", name);
    printf("\n your age is : %d", age);
    printf(" \n your gender is : %c", gender);
}