#include<stdio.h>

int main()
{
    // Program to print a table of a given number
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(num == 0) {
        printf("Please enter a valid number \n");
        printf("Enter a number: ");
    }

    for(int i = 1; i <= 10; i++){
        printf("%d \n", i*num);
    };
}