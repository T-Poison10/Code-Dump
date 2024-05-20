#include<stdio.h>
int main() { 
    FILE *fptr;
    FILE *fopenptr;

    fptr = fopen("NewFile.txt","w");
    fputs("I AM GAMING!",fptr);
    fputs("\nGAMING GAMGING EDGING BUST OMG LAMOAOOA",fptr);



    fclose(fptr);

    fopenptr = fopen("NewFile.txt","r");
    char content[20];
    if(fopenptr != NULL) { 
    printf("!!! \n");
    fgets(content,20,fopenptr);
    printf("%s",content);

 } else {
    printf("NO!!");
 }


}