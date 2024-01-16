#include <stdio.h>

int main() {
    int rows;

    // Input the number of rows for Pascal's Triangle
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    // Use a for loop to generate and print Pascal's Triangle
    for (int i = 0; i < rows; i++) {
        int number = 1;

        // Print spaces for alignment
        for (int space = 0; space < rows - i; space++) {
            printf(" ");
        }

        // Calculate and print numbers in each row
        for (int j = 0; j <= i; j++) {
            printf("%d ", number);
            number = number * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
