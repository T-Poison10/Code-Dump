#include <stdio.h>
#include <math.h>
 
int main()
{
    int num,hold,temp=0,holdsum=0,sum=0,check;
    float final;
  
    printf("Enter an integer number: ");
    scanf("%d",&num);
    final=pow(num,0.5);

    hold = final;
    while (hold != 0)
    {
        holdsum = (hold%10) + holdsum;
        hold/=10;
    }
    check = final * 10;
    while (check!=0)
    {
        sum = (check%10) +sum;
        check /= 10;
    }
    if (holdsum == sum)
    {
        printf("It is perfect square");
    }
    else{
        printf("It is not perfect square");
    }



   
}