#include<stdio.h>

int main() {
    int i = 0;
    int arr[5];
    int num;

    while (i < 5) {
        printf("Enter Number for the array: ");
        scanf("%d", &num);
        arr[i] = num; 
        i++;
    }

    printf("Reversed Array: ");
    for (i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
