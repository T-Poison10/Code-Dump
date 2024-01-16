#include<stdio.h>
int main(){
    int userid;
    int password;

    printf("Enter Username\n");
    scanf("%d",&userid);
    printf("Enter Password\n");
    scanf("%d",&password);


    while(userid != 123 && password != 456){
        printf("INVALID USERNAME OR PASSWORD\n");
        
        printf("Enter Username: ");
        scanf("%d",&userid);

        printf("Enter Password: ");
        scanf("%d",&password);
    }

    if(userid == 123 && password == 456){

        printf("\nLOGIN VERIFIED");
        
    }
    return 0;
}