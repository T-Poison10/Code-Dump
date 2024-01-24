#include <stdio.h>
int main(){
int i = 0; 
    for (int i = 0; i < 5; i++) { 
        for (int j = 0; j <= i; j++) { 
            // This inner loop will break when i==3 
            if (i == 3) { 
                break; 
            } 
            printf(" * "); 
        } 
        printf("\n"); 
    } 
    return 0; 
}