#include<stdio.h>
void staticFun(){
    static int dipan = 1;
    printf("Value of the stativ var is %d \n",dipan);
    dipan++;
}
int main()
{
    staticFun();
    staticFun();
    staticFun();
}