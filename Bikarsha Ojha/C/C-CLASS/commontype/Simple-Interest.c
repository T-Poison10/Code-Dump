#include<stdio.h>
int main(){
    float years;
    int principle;
    float rate;
    float SI;

    printf("Enter The Principle Amount.");
    scanf("%d",&principle);

    
    printf("Enter the Number of Years");
    scanf("%2f",&years);
    
    printf("Enter the RATE");
    scanf("%2f",&rate);

    SI = (principle * years * rate)/100;
    float tot = SI + principle;
    

 // printf("SIMPLE INTEREST OF %d PRINCIPLE AT A %.2f RATE IN %.2f YEARS:NRS. %.3f\n",principle,rate,years,SI);
  //  printf("TOTAL AMOUNT: %f",tot);
    return 0;
}