#include<stdio.h>

void bubbleSort(int*);
int main() {

    int arr[10] = {8,9,7,6,5,3,4,1,2,10};
    printf("Unsorted array is %d", arr);
    bubbleSort(*arr);
    printf("Sorted array is %d", arr);
    return 0;
}

void bubbleSort(int* arr) {
    
}