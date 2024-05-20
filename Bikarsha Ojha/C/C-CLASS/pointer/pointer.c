#include<stdio.h>
int main() { 
int age = 20;
int *ptrage;
float sal = 200.200,*ptrsal;



ptrage = &age;
ptrsal = &sal;



printf("AGE: %d \n",*ptrage);
printf("SALARY:  %.2f",*ptrsal);









} 
