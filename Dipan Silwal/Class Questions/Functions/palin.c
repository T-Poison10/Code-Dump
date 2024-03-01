#include <stdio.h>
int palindrome(int x);
int main()
{
    int num;
    printf("Enter a number to check weather it is palindrome or not:");
    scanf("%d",&num);
    printf("Palindrome number is %d",palindrome(num));
}
int palindrome(int x){
    int temp=0,i,hold=x, plain = 0;
    while(i!=0){
        temp = x % 10;
        palin = (palin*10 )+ temp;
    }
}