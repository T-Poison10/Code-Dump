#include<stdio.h>


int main(){
    char name[100];
    int age;
    char class[15];
    char sec[10];

    printf("Enter Your name");
    scanf("%s",&name);
    printf("Enter Your age");
    scanf("%d",&age);
    printf("Enter Your Bachelors Class Name");
    scanf("%s",&class);
    printf("Enter Your Section NAME");
    scanf("%s",&sec);

    printf("Your name is %s, You are %d years old and your Bachelors Class Name is %s and Your Section is %s",name,age,class,sec);
    
    return 0;

}