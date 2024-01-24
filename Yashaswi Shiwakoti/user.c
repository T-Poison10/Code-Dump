#include <stdio.h>
int main (){
    int a ,n,x;
     int sum=0;
    printf("enter a multi digit number\n ");
    scanf("%d",&a);
    n=a;
    while (a!=0){
        x=a%10;
        sum=sum+x;
        a=a/10;
    }
    printf("the sum is %d",sum);
}
   