#include<stdio.h>

int main() {
    int fnum;
    printf("Enter any 5 DIGIT number: ");
    scanf("%d", &fnum);

    float numconv = fnum % 3;
    printf("REMAINDER: %f", numconv);

    return 0;
}
