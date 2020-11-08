#include<stdio.h>

int factorial(int);

int main() {
    // Program to find factorial
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("**********Factorial of %d***************\n", num);
    printf("%d\n", factorial(num));
    return 0;
}

int factorial(int a) {
    if(a == 1 || a == 0) {
        return 1;
    }
    else {
        return (a*factorial(a-1));
    }
}