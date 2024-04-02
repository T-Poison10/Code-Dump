#include<stdio.h>
int main() { 

    FILE *ptr;
    ptr = fopen('baun.txt',"r");

    if(ptr == NULL) {
        printf("File does NOT exist idiot");    
        
    }


}