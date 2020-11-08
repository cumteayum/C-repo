#include<stdio.h>

int function(int* ptr1, int* ptr2){ 
    int c,d;
    c = *ptr1 - *ptr2;
    d = *ptr1 + *ptr2;
    *ptr1 = c;
    *ptr2 = d;
    return c,d;
}
int main() {
    int a = 20;
    int b = 30;
    printf("Value of a is %d and b is %d \n", a, b);
    function(&a, &b);
    printf("Value of a is %d and b is %d \n", a, b);
    return 0;
}