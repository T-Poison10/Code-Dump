#include<stdio.h>
int main ()
 {
    int k,c=0,n;
     printf ("enter 5 digit number" );
    scanf("%5d",&n);
    k=n;
    while(n>0)
    {
        c++;
        n=n/10;
        }
    n=k;
    if(c!=5 ){
        printf("please enter a 5 digit number");
    }

    else{
   
    printf("the remainder abfter devision by 3 is %d",n%3);
    }

 }