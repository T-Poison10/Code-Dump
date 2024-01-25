#include<stdio.h>
int main()
{
    float marks1,marks2,marks3,marks4,total;
    printf("Enter your marks");
    scanf("%f %f %f %f",&marks1, &marks2, &marks3, &marks4);
    total= marks1+marks2+marks3+marks4;
    printf(" Your obtained marks is:%.f \n",total);
    if (total>=85) {
        printf("You have scored A+");
        }
        else if (total>=65)
    {
        printf("You have scored B+");
    }
    else if (total>=35)
    {
        printf("You have scored C+");
    }
    
    else{
        printf("Failed");
    }
    return 0;
    }
