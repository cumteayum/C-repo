#include<stdio.h>

int main() {

    int n=6,c;
    printf("Enter 1 for triangular pattern and 0 for reversed triangular pattern\n");
    scanf("%d", &c);
    if(c==1){
        for(int i=0;i<=n;i++) {
            for(int j=0;j<=i;j++) {
                printf("%d", 1);
            }
            printf("\n");
        }
    } else if(c==0) {
        for(int i=n;i>=1;i--) {
            for(int j=1;j<=i;j++) {
                printf("%d", 1);
            }
            printf("\n");
        }
    }
    return 0;
}