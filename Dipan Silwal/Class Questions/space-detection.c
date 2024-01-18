#include<stdio.h>
struct student{
    int age;
    char name[100],gender;
};

int main()
{
    struct student s;
    char gendertemp;
    printf("Enter your name:");
    scanf("%[^\n]",s.name);
    printf("Enter your age:");
    scanf("%d",&s.age);
    printf("Enter your gender:");
    scanf("%[A-Z]\n",s.gender);
    printf("%s",s.gender);

    printf("Your name is : %s \n",s.name);
    printf("Your age is : %d\n",s.age);
}