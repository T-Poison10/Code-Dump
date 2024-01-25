#include<stdio.h>
int main()
{
    int x,y,sum,mul,diff;
    char choice;

    printf("Enter the value of x: \n");
    scanf("%d",&x);
    printf("Enter the value of y: \n");
    scanf("%d %c",&y,&choice);
    switch (choice)
    {
    case '+':
     printf("Addition:%d",x+y);
        break;
    case '-':
    diff=x-y;
     printf("you entered 2.\n");
        break;
    case 3:
     printf("you entered 3.\n");
        break;
    
    default:
    printf("Invalid choice.\n");
        break;
    }
}