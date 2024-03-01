#include <stdio.h>
struct student
{
    char name[20];
    int age, class;
} s1, s2;
int main()
{
    printf("Enter the name of student:");
    scanf("%s %d %d", &s1.name, &s1.age, &s1.class);
    printf("%s %d %d", s1.name, s1.age, s1.class);
}
