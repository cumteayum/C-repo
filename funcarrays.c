#include<stdio.h>

void printArrayValue(int arr[]) {
    for(int i=0;i<=9;i++) {
        printf("%d ", arr[i]);
    }
    arr[0] = 20;
}

void printArrayPointer(int* ptr) {
    for(int i=0;i<=9;i++) {
        printf("%d ", *(ptr+i));
    }
}

void printMultiDArray(int arr[2][2]) {
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            printf("\n value at %d, %d in array is %d\n ", i,j,arr[i][j]);
        }
    }
}

int main() {
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    // printf("\n%d\n", array[0]);
    printArrayPointer(array);
    int arr[][2] = {{2,4}, {4,5}};
    printMultiDArray(arr);
    return 0;
}