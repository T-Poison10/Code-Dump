#include<stdio.h>
int main(){
    float C;

    printf("Enter Your Temperature in form of celsius"); //Input
    scanf("%f",&C);
//_____________
    float convert = (C * 9/5) + 32; //Conversion Formulae
    printf("Your Temperature Converted to faranheit is: %f ",convert);//Output
    return 0;

}