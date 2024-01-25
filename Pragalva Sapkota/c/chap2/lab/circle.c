#include <stdio.h>
#define PI 3.14
int main()
{
    float radius,area,perimeter;
    printf("Enter the value or radius:");
    scanf("%f",&radius);
    area=PI*radius*radius;
    printf("\nArea is : %.2f",area);
    perimeter=2*PI*radius;
    printf("\nThe perimeter is: %.2f",perimeter);
    

}