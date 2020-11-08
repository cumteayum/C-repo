#include<stdio.h>
// SImple program to add two numbers using call by reference;
int add(int* p, int* q) {
    return *p+*q;
}
int main() {
    int a = 100, b=200;
    printf("%d", add(&a, &b));
    return 0;
}