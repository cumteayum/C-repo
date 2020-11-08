#include<stdio.h>

int main() {

    int a = 34;
    int* ptr = &a;
    // pointer arithmetic
    // printf("%d\n", ptr);
    // printf("%d\n", ptr+1);

    int arr[] = {1,2,3,4};
    printf("Address at position 2 of array is %d\n", &arr[2]);
    printf("Checking again %d\n", &arr+2);

    printf("Value at position 2 of array is %d\n", arr[2]);
    printf("%d", arr+2);

    return 0;
}