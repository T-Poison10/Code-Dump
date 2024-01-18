#include <stdio.h>
int main() {
    float m1,m2,m3,m4,m5,total;
    printf("Enter the student's mark in all subjects: ");
    scanf(" %f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
    total = ((m1+m2+m3+m4+m5)/5);

    if (total >= 90)
    {
        printf("Grade: A+\n");
    }
        else if (total >= 80)
        {
            printf("Grade: B\n");
        }
        else if (total >= 70)
        {
            printf("Grade: C\n");
        }
        else if (total >= 60) 
        {
            printf("Grade: D\n");
        } 
    else {
        printf("Grade: F\n");
    }++++++++++++++++++++

    return 0;
}