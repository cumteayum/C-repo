#include<stdio.h>

int main()
{
    int a;
    printf("Enter the value: ");
    scanf("%d", &a);
    switch(a) {
        case 1:
            printf("Value is 1\n");
            break;
        
        case 2:
            printf("Value is 2\n");
            break;
    };

    return 0;
}