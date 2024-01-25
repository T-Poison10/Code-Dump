#include<stdio.h>
int main()
{
    int num,palin=0,temp,save;
    printf("Enter the number");
    scanf("%d",&num);
    save=num;
    while ( num!=0)
    {
        temp=num%10; 
        palin=(palin*10)+temp;
        num=num/10;
    }
    if (save==palin)
    {
        printf("Num is palindrome");
    }
    else{
        printf("Num isn't palindrome");
    }
    return 0;
}