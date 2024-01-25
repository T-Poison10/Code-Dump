#include<stdio.h>
int main()
{
    int choice;
    printf("Enter a number [1-3]:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
     printf("you entered 1.\n");
        break;
    case 2:
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