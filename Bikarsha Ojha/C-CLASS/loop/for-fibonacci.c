#include<stdio.h>
int main(){
    int a;
    int b;
    int n;
    int term;
    int i;

    a = 0; 
    b = 1;
    term = a + b;

    printf("Enter Your number of terms: ");
    scanf("%d",&n);
    printf("1\t");
    printf("%d\t",term);

    for( i = 0; i <= n ; i ++ ){
        a = b;
        b = term;

        term = a + b;

        printf("%d\t",term);
    }
}