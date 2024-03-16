#include<stdio.h>

int main() { 
    int arrlen;

    printf("Enter Your Array Length: ");
    scanf("%d", &arrlen);

    int arr[arrlen];
    int *prtarr[arrlen];

    for (int k = 0; k < arrlen; ++k) { 
        printf("Enter Value for arr[%d]: ", k);
        scanf("%d", &arr[k]);
    }

    for (int i = 0; i < arrlen; i++) { 
        prtarr[i] = &arr[i]; 
    }

    printf("Printing Array Elements:\n");
    for (int j = 0; j < arrlen; j++) { 
        printf("Address: %d\t", prtarr[j]); // Print using pointer notation
         printf("Value: %d\n", arr[j]);   // Value Print
    }

    return 0;
}
