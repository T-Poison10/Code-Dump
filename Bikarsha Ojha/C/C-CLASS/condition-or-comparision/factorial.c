#include<stdio.h>
int main(){
    int num;
    int product = 1;
    int i;
        
        i = 1;
    
     printf("Enter Your Number");
     scanf("%d",&num);
     
    while (num<0) /* LOOP TO CHECK */
    {
     printf("\n Negative Number, Enter Your Number(positive)");
     scanf("%d",&num);
        
    }
    
    
    if(num >= 1){

            while (i <= num){
            product = product * i;
            i++;
            
        }
        printf("FACTORIAL : %d", product);
    }

    return 0;
}

