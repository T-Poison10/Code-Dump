#include<stdio.h>



struct person { 
    char name[20];
    int age;
    float salary;
};



void display(person p);

int main() {
    struct person p1 = ["gamer",18,18282];
    struct person p2 = ["gamer two", 19 , 29939];


    display(p1.name,p1.age,p1.salary);
    display(p2.name,p2.age,p2.salary);




}



void display(char nam   e[20],int age, float salary);


int main() { 
    printf("%s\n",name);
    printf("%d\n",age);
    printf("%d\n",salary);
}