#include<stdio.h>
int main() { 
    int *arr[3];
    int a = 4;
    int b = 9;
    int c = 14;


    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;


    for ( int i  = 0; i < 3; i++) { 
        printf("%d\t",*arr[i]);//Printing Values
          printf("%d\n",arr[i]); // Printing Address Value

    }
}