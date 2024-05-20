#include<stdio.h>
int main() {
    FILE* fptr;
 fptr = fopen("myfile.txt","r");
 char content[20];
 if(fptr !=     NULL) { 
    printf("!!! \n");
    fgets(content,20,fptr);
    printf("%s",content);

 } else {
    printf("NO!!");
 }
}