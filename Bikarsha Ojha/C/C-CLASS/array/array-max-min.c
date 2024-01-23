#include<stdio.h>

int main() {
    int i = 0;
    int arr[5];
    int num;
    int arrmin, arrmax;

    while (i < 5) {
        printf("Enter Number for the array: ");
        scanf("%d", &num);
        arr[i] = num; 
        i++;
    }

    arrmax = arr[0];
    arrmin = arr[0];

    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);

        if (arr[i] > arrmax) {
            arrmax = arr[i];
        }

        if (arr[i] < arrmin) {
            arrmin = arr[i];
        }
    }

    printf("\nMAX VALUE: %d", arrmax);
    printf("\nMIN VALUE: %d", arrmin);

    return 0;
}
