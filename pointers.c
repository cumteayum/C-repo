#include<stdio.h>


int main() {
    printf("___________POINTERS__________\n");
    int a = 56;
    int* ptr = &a;
    printf("The value of a is %d\n", *ptr);
    printf("The address of pointer to a is %p\n", &ptr);

}
