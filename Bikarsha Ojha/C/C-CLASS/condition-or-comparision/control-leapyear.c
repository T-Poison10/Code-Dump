#include<stdio.h>
int main(){
    int year; 

    printf("Enter your Year");
    scanf("%d",&year);
 if (year %100 == 0){
            if(year%400 == 0){
                printf("Leap YEAR x2");
            } else { 
                printf("NOT LEAP YEAR >:(");
            }
        } else {
        
    
       if ( year %4 == 0){
        printf("LEAP YEAR YIPPEE \n");
       } else
       {
        printf("Not leap year");
       }
    }
    
}
ER