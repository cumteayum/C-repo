#include<stdio.h>

int temp;
void arrayRev(int arr[]) { 
    for(int i=0;i<5;i++){
        temp = arr[i];
        arr[i] = arr[4-i];
        arr[4-i] = temp;
    }
    for(int i=0;i<5;i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr[] = {1,2,3,4,5,6};
    arrayRev(arr);
    return 0;
}