#include<stdio.h>
int main(){
    int i = 0;
    int arr[5];
    int num;
    int rra;


    while (i < 5) {
        printf("Enter Number for the array: ");
        scanf("%d", &num);
        arr[i] = num; 
        i++;
    }
   
    


    for (i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    


}