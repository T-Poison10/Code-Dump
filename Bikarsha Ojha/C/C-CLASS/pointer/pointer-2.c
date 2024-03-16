#include<stdio.h>
int main() {
     int a = 20;
     int *ptr;

     ptr = &a;
     printf("VALUE OF ptr = %d \n",ptr);
        ptr++;
     printf("VALUE OF ptr = %d \n",ptr);
     ptr = ptr + 2;
     printf("VALUE OF ptr = %d \n",ptr);
     ptr = ptr - 3;
     printf("VALUE OF ptr = %d \n",ptr);



}