#include<stdio.h>
int main(){
    int i;
    int sum = 0;
    for(i = 0; i<10; i += 3)
    {
        sum += i * i;

    }
    printf("%d",sum);
    return 0;

}

//OUTPUT = 126