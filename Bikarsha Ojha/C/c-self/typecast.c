#include<stdio.h>
int main() {
    int a = 10;
    float b = 20.12;
    char ch = 'b';
    void *ptr = &ch;
    printf("%c",*(char*)ptr);

}