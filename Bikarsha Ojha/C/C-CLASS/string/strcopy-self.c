#include<Stdio.h>
int main() { 
    int count; 
    char take[] = "TAKE STRING";
    char give[50];
    int i = 0;


    while(take[i] != '\0')
    {
        give[i] = take[i];
        i++;

    }


    printf("DESTINATION: ");
    for( int j = 0; j < 1; j++){
        printf("%c",give[j]);
    }
    return 0;

}