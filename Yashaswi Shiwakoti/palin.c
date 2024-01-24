#include <stdio.h>
int main (){
    int check,num,x,palin=0;
    printf("enter a number for palindrome checking ");
    scanf("%d",&num);
    check=num;
    while (num!=0){
        x=num %10;
        palin=palin*10+x;
        num=num/10;

    }
    if (palin==check){
       printf(" the number is a palindrome ");
    }
else
printf("not palindrome");
}