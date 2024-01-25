#include <stdio.h>
int main()
{
    int userid,pass;
    printf("Enter your user id:\n");
    scanf("%d",&userid);
    printf("Enter your pass:\n");
    scanf("%d",&pass);
    // if (userid!=123)
    // {
        while (userid!=123)
        {
            printf("Userid isn't correct, please retry \n");
            scanf("%d",&userid);
        }
    // }
    // if (pass!=456)
    {
        while (pass!=456)
        {  
            printf("Pass isn't correct, please retry \n");
            scanf("%d",&pass);
        }

    }
    
    if (userid==123 && pass==456)
    {
        printf("Log in successfull");
    }
    
    }
    
   
    
