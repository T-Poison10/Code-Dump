#include<stdio.h>
int main( ) {
     int a = 20,*p;


     p = &a;

     printf("VALUE OF p: %u \n",p);
     printf("VALUE OF p: %u \n",++p);
     printf("VALUE OF p: %u \n",p++);
     printf("VALUE OF p: %u \n",--p);
     printf("VALUE OF p: %u \n",p--);
     printf("VALUE OF p: %u \n",p);
}