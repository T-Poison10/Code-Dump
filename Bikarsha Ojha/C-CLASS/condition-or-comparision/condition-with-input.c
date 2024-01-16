#include<stdio.h>
int main(){
    int a;
    int b;

    printf("Enter the first number");
    scanf("%d",&a);
    
    printf("Enter the Second Number");
    scanf("%d",&b);

    if(a > b){
        printf(" %d > %d\n",a,b);
    } else {
        printf("%d > %d",b,a);
    }
    return 0;
}