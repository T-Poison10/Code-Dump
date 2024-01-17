#include <stdio.h>

int main() {
    int tc;
    int sum_series = 1;
    int series = 0;

    printf("How many terms of the series to print? ");
    scanf("%d", &tc);

    for (int n = 1; n <= tc; n++) {
        printf("%d\t", sum_series);
        series += sum_series;
        sum_series += n;
        
        
    }

    printf("\nSum of the series: %d\n", series);

    return 0;
}
