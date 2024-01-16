#include<stdio.h>
int main(){
    int a;
    int b;
    int c;

    printf("Enter first number: \n");
    scanf("%d",&a);

    printf("Enter second number: \n");
    scanf("%d",&b);

    printf("Enter third number: \n");
    scanf("%d",&c);

    if(a>b){
        if(a>c){
            printf("a is greater than both b and c \n");
        } else {
        printf("a is greater than b but not greater than c.\n");
        }

    } else {
        if (b>a){
            if (b>c){
                printf("b is the greatest \n");
            } else {
                printf("b is greater than a but not greater than c.\n");
            }

        } else {
                printf("C is the greatest number.\n");
            }
        }
    
    return 0;
}