#include <stdio.h>
#define Password "nepal123"
int main()
{
    
    char str[8];
    char stn[8];
    printf("enter your password");
    scanf("%s", str);
    if (str!= Password)
        {
            while (str!= Password)
            {
                printf("please enter the correct password ");
                scanf("%s", stn);
                if (stn ==Password)
                { printf("login");}
            }
        }
    else
    {
        printf("login");
    }
}
