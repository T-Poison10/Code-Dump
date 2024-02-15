#include<stdio.h>
void FunctionA() { 

     static int staticVar = 0;

    printf("StaticVar = %d\n",staticVar);


    staticVar++;


}



int main() {
     
     FunctionA();
     
     FunctionA();
     
     FunctionA();
     
     FunctionA();
}