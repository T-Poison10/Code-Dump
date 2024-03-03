#include<stdio.h>
#include<string.h>

struct address {
    char state[20];
    int zip;
    char houseno[20];



};


struct Person { 
    char name[20];
    int age;

    struct address add;
    
};


int main() {
    struct Person p1;


    strcpy(p1.name,"gamer");
    p1.age = 50;
    strcpy(p1.add.houseno,"'Babuji Mobail 100'");
    
    strcpy(p1.add.state,"pp");

    p1.add.zip = 22000;
    



    printf("%s\n        %d\n       %s\n    %s\n    %d\n",p1.name,p1.age,p1.add.houseno,p1.add.state,p1.add.zip);
}