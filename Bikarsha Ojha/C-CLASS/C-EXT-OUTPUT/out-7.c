#include<stdio.h>
int main(){
    int a=6, b = 4;

    while (a+b)
    {
        printf("a=%d b = %d",a,b);
        a = a/2;
        b%=3;
    }
    return 0;
    
    
}

//INFINITE LOOP OF ONE AND ZERO ( A = 0 , B = 1)