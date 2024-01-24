#include <stdio.h>

int main() {
    int pass,id;
    int x = 2; 

    while (x != 0) {
        printf("\nInput the user id and password: ");
        scanf("%d,%d", &id ,&pass); 

        if (id == 123 && pass==456) {
            printf("Correct password"); 
            x = 0; 
        } else {
            printf("Wrong password, try another");
           
        }

        printf("\n");
    }

    return 0;
}