#include<stdio.h>
 

 struct student{
    char name[20];
    int age;
    float marks;
 };


 int main(){

    struct student s1 = {"gangster",10,10};
    struct student s2,s3;


                    
    s2.age = 30;
    s2.marks = 40;

    printf("Student1 details: %s %d %.2f\n",s1.name,s1.age,s1.marks);
    printf("Student2 details: %s %d and %.2f\n",s2.name,s2.age,s2.marks);
 }