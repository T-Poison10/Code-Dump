#include<stdio.h>
int main() {
     FILE *ptr;
     char data[20];
     char ch;
     int position;
     ptr= fopen("myfile.txt","a+");

     if(ptr == NULL) { 
        printf("ERROR");

     }


     position = ftell(ptr);
     printf("CURSOR position at %d\n",position);
     fseek(ptr , -5, SEEK_END);
     position = ftell(ptr);
     printf("Cursor Position at : %d",position);
     
     }