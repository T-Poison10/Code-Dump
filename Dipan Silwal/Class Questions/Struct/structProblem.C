#include <stdio.h>
#include <string.h>
struct student
{
    char name[100];
    int age, marks;
};
struct student marksIncrease(struct student s);
int main()
{
    int i;
    struct student s[3];
    for (i = 0; i < 3; i++)
    {
        printf("enter student name (%d)", i + 1);
        scanf("%s", &s[i].name);
        printf("enter student age (%d)", i + 1);
        scanf("%d", &s[i].age);
        printf("enter student marks (%d)", i + 1);
        scanf("%d", &s[i].marks);
    }
    for (i = 0; i < 3; i++)
    {
        s[i] = marksIncrease(s[i]);
    }
    for (i = 0; i < 3; i++)
    {
        printf("Name of student %s \n", s[i].name);
        printf("Age of student is %d \n", s[i].age);
        printf("Marks of students are %d \n", s[i].marks);
    }
}
struct student marksIncrease(struct student s)
{

    s.marks += 1;
    return s;
}