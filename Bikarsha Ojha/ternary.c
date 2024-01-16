#include<stdio.h>
int main(){
    int a,b;
    //INPUT
    printf("Enter Value of a: \n");
    scanf("%d",&a);
    printf("Enter Value of b: \n");
    scanf("%d",&b);

    int resultant = (a>b)?(a+b) : (a-b);
    OUTPUT
    if(a>b){
        
    printf("OUTPUT(SUM): %d",resultant);
    }  else {
        
    printf("OUTPUT(DIFFERENCE): %d",resultant);
    }
}