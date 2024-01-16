#include <stdio.h>

int main() {
    int number;
    int mult;
    printf("Enter a number to print their table of: ");

    scanf("%d", &number);
for (int i = 1; i <= 10; i++) {
     mult = number * i;
        printf("%d x %d = %d\n", number, i, mult );
    }

    return 0;
}
