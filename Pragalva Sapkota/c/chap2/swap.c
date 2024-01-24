#include<stdio.h>
int main(){
    int a=10,b=20, c=30,temp;
    printf("before swapping a=%d,b=%d\n",a,b);
    (temp=a,a=b,b=temp);
    printf("after swapping a=%d,b=%d",a,b);
    ( temp=c,a=b,b=c,c=temp);
    printf(" \n a=%d,b=%d,c=%d",a,b,c);
    return 0;
}