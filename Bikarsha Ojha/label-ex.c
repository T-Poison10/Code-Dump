#include<stdio.h>
int main(){
    int i = 0;

    loop_begin: //label

    if ( i < 5){
        printf("%d",i);
        i++;

        goto loop_begin;
    }
    printf("\n");
    return 0;
}