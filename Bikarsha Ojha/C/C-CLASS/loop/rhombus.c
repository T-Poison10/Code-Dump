#include<stdio.h>

int main() {
    int size;

    printf("ENTER THE SIZE OF THE RHOMBUS: ");
    scanf("%d", &size);

    for (int i = 1; i <= size; i++) {
        // Print leading spaces
        for (int j = 1; j <= size - i; j++) {
            printf(" ");
        }

        // Print asterisks
        for (int k = 1; k < = size; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
