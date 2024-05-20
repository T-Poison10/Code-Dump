#include <stdio.h>


//int SalaryINC(int newsalary);

struct person
{
    char name[20];
    int age;
    float salary;
};

void display(struct person p);
int main()
{
    struct person p1 = {"aashaswa", 18, 100.10};
    struct person p2 = {"ram", 19, 200.10};
    display(p1);
    display(p2);
    return 0;

    SalaryINC();
}

void display(struct person p)
{
    printf("%s\n", p.name);
    printf("%d\n", p.age);
    printf("%f\n", p.salary);
}



