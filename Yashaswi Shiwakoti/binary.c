#include <stdio.h>
int main()
{

    int countindex=0,count = 0, arr[10], i = 0;
    int num[4];
    for (i = 0; i < 5; i++)
    {
        printf(" enter a number ");
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 5; i++)
    {
        // Repeat until num becomes zero
        while (num[i] != 0)
        {
            arr[count] = num[i] % 2; // Remainder
            num[i] = num[i] / 2;     // Quotient
            count++;
        }
        printf("\nThe Binary Equivalent is: ");
        for (int i = countindex; i < count; i++)
        {
            // Print the bits in reverse order
            printf("%d", arr[count - i - 1]);
            countindex++;
        }
    }

    return 0;
}