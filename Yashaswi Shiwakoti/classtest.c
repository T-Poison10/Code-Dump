#include<stdio.h>
#include <math.h>
int main (){
    int num,a,sum,k;
    printf("enter a number ");
    scanf("%d",&num );
    k=num;
    while (num!=0){
        num=num/10;
        a++;

    }
    num=k;
    while(k!=0){
        k=k/10;
        sum=sum+ ( k , a ) ;
    }
    if (sum==num){
        printf("the number is armstrong");
    }
    else{
        printf("the num is not armstrong");
    }
    return 0;
}
