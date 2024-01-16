#include<stdio.h>

int main(){
    int dec;
    char hex[15];

    printf("Enter Your DECIMAL number: ");
    scanf("%d", &dec);

    // HEX CONVERT
    printf("HEX CONVERTED NUMBER: %x\n", dec);
    //OCT CONVERT
    printf("OCT CONVERTED NUMBER: %o", dec);

    return 0;
}
