#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void genRandom(int low,int up,int count) {
    int i=0;
    int num;
    for(i;i<count;i++){
	num = (rand() % (up - low + 1) + low);
    }
    printf("%d", num);
}

int main(){
    srand(time(0));
    genRandom(1,5,1);
    return 0;
}
