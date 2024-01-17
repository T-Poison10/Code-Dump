#include<stdio.h>

int main() {
    int num1, num2; 
    char choice;

    printf("Enter your first number: ");
    scanf("%d", &num1);

    printf("Enter your second number: ");
    scanf("%d", &num2);

    printf("Enter operator for function ");
    scanf("%s", &choice);

    switch (choice) {
    case '+':
        printf("Sum\n");
        int sum = num1 + num2;
        printf("%d", sum);
        break;
    case '-':
        printf("Difference\n");
        int diff = num1 - num2;
        printf("%d", diff);
        break;
    default:
        printf("Invalid choice.\n");
    }

    return 0;
}
