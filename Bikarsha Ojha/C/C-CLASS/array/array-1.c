#include <stdio.h>

int main() {
    int arr[5];

    printf("Enter 5 numbers for the array: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        printf("%d ", arr[i]);
    }

    return 0;
}
