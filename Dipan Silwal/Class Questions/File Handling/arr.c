#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr;
    void *vptr;
    printf("FIRST ADDRESS OF ARR IS %u\n", arr);
    printf("FIRST value OF ARR IS %d\n", arr[1]);
    printf("%d\n", sizeof(ptr));
    vptr = arr;
    printf("Add of vptr is %u", *(int *)vptr);
    return 0;
}