#include<stdio.h>
#include<string.h>

struct student { 
    char name[20];
    int marks; 
};

void display(struct student s1)
int main(){ 

strcpy(s1.name,"Baun");
s1.marks = 80;
display(s1);

};



void display(  struct student *s1) 
 {

    printf("%s\t",s1.name);
    printf("%d",s1.marks);
 };





