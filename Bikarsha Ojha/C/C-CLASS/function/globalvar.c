#include<stdio.h>
int Globalvar = 10;
void FunctionOne() { 

    printf("First Function globalvar = %d", Globalvar);


}


void FunctionTwo() {

    Globalvar = 20;
    printf("\tSecond Function GlobalVar = %d\n",Globalvar);


}


int main() { 

    printf("Inside main GlobalVar  = %d\n",Globalvar);


    FunctionOne();
    FunctionTwo();



    printf("\nBack to main = %d\n", Globalvar);



}