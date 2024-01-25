#include <stdio.h>
int main()
{
    char str[100],ch='y';
    int i=0;
    printf("enter your name \t");
    //do while (ch!='\n'){
    while (ch!='\n'){
    ch=getchar();
    str[i]=ch;
    i++;
   }
   str[i]='\0';
   printf("your name is %s",str);
   return 0;
   
}
/*#include <stdio.h>
int main (){
    char str[];
    printf("enter your name ");
    gets(str);
    printf("your name is :");
    puts(str);
    return 0;
}*/