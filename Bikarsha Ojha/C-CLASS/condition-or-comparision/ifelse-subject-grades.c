#include<stdio.h>
int main(){
    float m1,m2,m3,m4,tot;

    printf("Enter the marks of your four subjects: \n");
    scanf("%f%f%f%f",&m1,&m2,&m3,&m4);

    tot = (m1+m2+m3+m4)/4;
    if(tot >= 85){
         printf("Grade = A, total = %f",tot);
    } else if (tot >= 75 && tot < 85 )
    {
        printf("GRADE = B, total = %f",tot);
    } else if (tot >= 60 && tot < 75)
    {
       printf("Grade = C, total = %f",tot );

    } else {
        printf("FAIL.");
    }
    return 0;
    
    
}