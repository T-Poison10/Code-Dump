#include <stdio.h>

int main() {
    char str[10];
    char word;
    int i = 0;
    char ch = 'y';

    printf("ENTER YOUR WORD  ");

    do {
        scanf(" %c", &word); 
        str[i] = word;
        i++;
    } while (i < 9 && word != '\n'); // Stop if newline or array is full

    str[i] = '\0'; 

    printf("%s", str);

    return 0;
}
