#include<stdio.h>
void swap(int * , int * );

int main() { 

    int a = 10;
    int b = 20;


    swap(&a,&b);


    printf("In the Caller: \na = %d b=%d\n",a,b);

    return 0;

}


//SWAP FUNCTION 


void swap(int * x, int * y)//Parameters
{
    int t;
    t = *x;

    *x = *y;

    *y = t;


    printf("CALLED FUNCTION: \nx = %d, y = %d\n",x,y);
}