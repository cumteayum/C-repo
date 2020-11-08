#include<stdio.h>

// Call by reference in C
void changeValue(int* addr) {
    *addr = 345;
}

int main() {
    int a = 43;
    printf("Value of a is %d \n", a);
    changeValue(&a);
    printf("Value of a is %d \n", a);
    return 0;
}