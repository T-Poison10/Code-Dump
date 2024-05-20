#include<stdio.h>
union unresult { 
    int marks; 
    char grade;
    float per;

}union_res;

struct stresult { 
    int marks;
    char grade;
    float per; 

}structure_res;

int main(){ 

printf("Printing the memory locations for structure \n");

printf("%f\n",&structure_res.per);
printf("%c\n",&structure_res.grade);
printf("%d\n",&structure_res.marks);


printf("Printing the memory locations for union \n");

printf("%f\n",&union_res.per);
printf("%c\n",&union_res.grade);
printf("%d\n",&union_res.marks);

}