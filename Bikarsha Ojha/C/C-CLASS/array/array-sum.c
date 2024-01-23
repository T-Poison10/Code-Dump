#include<stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int arrtwo[5] = {5, 4, 3, 2, 1};

    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += arr[i] + arrtwo[i];
    }

    printf("%d\n", sum);

    return 0;
}
