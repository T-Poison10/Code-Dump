#include<stdio.h>

int main() {
    int arr[5];
    int i;
    int *ptr = arr;



    for (i = 0; i < 5; i++) {
        printf("Enter value for element %d: ", i + 1);
        scanf("%d", ptr); 
        ptr++; 
    }

    
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
