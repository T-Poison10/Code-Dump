#include<stdio.h>
#include<string.h>

int main() {
    int i = 0;
    char str[100]; 
    char word;

    printf("ENTER YOUR WORD): ");

    do {
        scanf(" %c", &word);
        str[i] = word;
        i++;
    } while (word != '\0' && i < 99); 

    str[i] = '\0'; 

    int size = strlen(str); 

    printf("Word: %s\n", str);
    printf("Size: %d\n", size);

    return 0;
}
