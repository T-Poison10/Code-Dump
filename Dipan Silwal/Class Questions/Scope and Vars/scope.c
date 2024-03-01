#include <stdio.h>
int global = 50;
int fun1()
{
    printf("Accessing global var in fun1:%d \n", global);
    return 0;
}
int fun2()
{
    int global = 10;
    printf("Accessing global var in fun2:%d \n", global);
}
int main()
{
    printf("Inside main fun:%d \n", global);
    fun1();
    fun2();
    return 0;
}