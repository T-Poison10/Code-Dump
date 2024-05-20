#include <stdio.h>
int *pointer(int *a, int b);
void workPointer();
int main()
{
    int arr[5] = {1, 2, 3, 4, 5}, *ptr, n = 2;
    ptr = pointer(arr, n);
    printf("The value of *ptr is %d\n", *ptr);
    workPointer();
}
int *pointer(int *a, int b)
{
    a = a + b;
    return a;
}
void workPointer()
{
    int a = 20, b = 30;
    int *ptr = &a, *ptr2, **ptr3;
    ptr2 = &b;
    ptr3 = &ptr2;
    printf("Ptr is %d\n", ptr);
    printf("Ptr is %d\n", ptr2);
    printf("Ptr is %d", ptr3);
}