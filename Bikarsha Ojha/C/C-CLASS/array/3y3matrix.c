#include<stdio.h>

int main() {
    int arr[3][3];
    int i = 0;
    int j = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {

            printf("enter array elements: ");
            scanf("%d", &arr[i][j]);

        }
    }


    for(i = 0; i < 3; i++) {
        for( j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
