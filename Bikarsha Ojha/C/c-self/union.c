#include<stdio.h>
#include<string.h>


union Student { 
    char name[20];
    int age;
    float marks;

}st;



int main() {

    union Student st = {"baun",30,20.23};


    printf("%s %d %.2f",st.name,st.age,st.marks);

    //  strcpy(st.name,"baun");
    //  printf("%s",st.name);


    //  st.age = 30;
    //  printf("%d",st.age);


    //  st.marks = 30.23;
    //  printf("%.2f", st.marks);
}