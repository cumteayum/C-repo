#include<stdio.h>

int main() {

    typedef int Integer;
    Integer nums = 100;

    typedef int* Pointer;
    Integer c=20,d=30;
    Pointer a,b;
    a = &c;
    b = &d;
    
    printf("%d", nums);
    printf("%x %x", a,b);
    return 0;
}