#include <stdio.h>
#include <stdlib.h>

#define MAX_POINTS 781

int main() {
    FILE *fp;
    char file_name[] = "graph.txt"; 
    double x_values[MAX_POINTS];
    double y_values[MAX_POINTS];
    int count = 0;

    fp = fopen(file_name, "r");
    if (fp == NULL) {
        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
    }

    while (fscanf(fp, "%lf %lf", &x_values[count], &y_values[count]) == 2 && count < MAX_POINTS) {
        count++;
    }

    fclose(fp);

    printf("Coordinates read from the file:\n");
    for (int i = 0; i < count; i++) {
        printf("(%.4lf, %.4lf)\n", x_values[i], y_values[i]);
    }

    return 0;
}
