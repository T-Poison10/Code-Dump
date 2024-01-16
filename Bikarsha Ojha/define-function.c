#include<stdio.h>

#define PI 3.14

int main(){
    float radius;
    printf("ENTER value of radius: ");
    scanf("%f", &radius);

    float perimeter = 2 * PI * radius;
    float area = PI * radius * radius;

    printf("Perimeter of Circle: %f\n", perimeter);
    printf("Area of Circle: %f ", area);

    return 0;
}
