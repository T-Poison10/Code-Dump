#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    //calculating size of an array
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("size of orginal array is:%d \n",size);
    int reversearr[size];
    for ( int i = size-1,j=0; i>=0; i--,j++)
    {
        reversearr[j]=arr[i];
    }
    

}