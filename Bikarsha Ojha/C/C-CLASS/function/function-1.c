#include<stdio.h>
void FirstFunction() { 
    int x = 5;

    printf("Inside function x = %d",x);
    {
    int x = 10;
    printf("Inside Inner Scope: x = %d\n", x);
    }

    printf("Back to the function scope : x =%d\n",x);

}


int main(){
    int y = 20;
    printf("Inside main: y = %d",y);


    FirstFunction();


    printf("Back to main y = %d\n",y);
    return 0;
}