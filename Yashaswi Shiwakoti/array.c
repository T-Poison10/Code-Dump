#include<stdio.h>
int main (){
    int i,arr[5],sum=0;
    int evencount=0 ;
    int oddcount=0;
    printf("enter the values for your array");
    for (int i=0;i<5;i++){
        
        scanf("%d",&arr[i]);
        
        printf("%d \t",arr[i]);
        sum=sum+arr[i];
        if (arr[i] % 2 == 0){
            evencount=evencount+1;
        }
        else {
            oddcount=oddcount+1;
        }
    }
    printf("\n the sum is %d",sum);
    printf("\n no of even numbers is:%d",evencount);
    printf("\n no of odd numbers is:%d", oddcount);
    return 0;
}