#include<stdio.h>
int fact(int n);

int main() { 
  int factorial;
    int a;
    printf("Enter factorial no.");
    scanf("%d",&a);
 factorial = fact(a);

 printf("%d",factorial);   
}

int fact(int n ) {

    if (n == 1) { 
        return 1;

       } else { 
            return n*fact(n-1);
       }

}