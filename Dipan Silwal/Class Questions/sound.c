#include<stdio.h>
#include<unistd.h>

int main(){
    int sec;
    printf("\n Enter the no of minutes you need to wait :");
    scanf("%d",&sec);
    sec *= 60;
    do {
        printf("\r%d ",sec);
        sec--;
        fflush(stdout);
        sleep(1);
    }while(sec>0);

    printf("\n Time Elapsed");
    return 0;
}