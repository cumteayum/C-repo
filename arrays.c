#include<stdio.h>

// Syntax -- data_type name[size]

int main() {
    // int marks[5] = {45,65,32,12};
    // for(int i = 0; i <= 4; i++) {
    //     printf("%d\n", marks[i]);
    // }

    int arr[5];
    int inp;
    for(int i = 0; i<=5; i++) {
        printf("Enter number for index %d ", i);
        scanf("%d", &inp);
        arr[i] = inp;
    }
    for(int j=0;j<=5;j++) {
            printf("%d ", arr[j]);
    }
    return 0;
}