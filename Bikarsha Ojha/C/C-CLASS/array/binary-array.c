#include<stdio.h>

int main() {
    int dn;
    int arr[10];
    int i = 0;

    printf("Enter the decimal number: ");
    scanf("%d", &dn);

    while (dn != 0) {
        arr[i] = dn % 2;
        dn = dn / 2;
        i++;
    }

    printf("Binary Equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", arr[j]);
    }

    return 0;
}
