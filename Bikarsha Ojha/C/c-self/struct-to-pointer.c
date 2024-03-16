#include <stdio.h>
#include <string.h> // Include the string.h header for string manipulation functions

struct baun {
    char name[20];
    int age;
    float favnum;
};

int main() { // Changed function name to main
    struct baun b1 = {"baun", 29, 19219.222}; // Corrected struct initialization syntax
    struct baun *ptr = &b1;
    printf("%s", ptr->name); // Print the value stored in name
    printf("\t%u\n", ptr->name); // Print the address of name

    strcpy(ptr->name, "baun2"); // Corrected string assignment using strcpy
    printf("%s\n", ptr->name); // Print the modified value of name

    return 0; // Added return statement to indicate successful completion of main
}

