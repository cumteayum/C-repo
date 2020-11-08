#include<stdio.h>

int fibrec(int);
int fibitr(int);

int main() {
    int num;
    // printf("Enter a number\n");
    // scanf("%d", &num);
    printf("%d \n", fibrec(5));
    printf("%d \n", fibitr(5));
    return 0;
}

int fibrec(int n) {
    if(n<=1){
        return 1;
    }
    else{
        return (fibrec(n-1) + fibrec(n-2));
    }
}

int fibitr(int n) {
    int a = 0, b = 1;
    for(int i=0;i<=n-1;i++) {
        b = a+b;
        a = a-b;
    }
    return a;
}