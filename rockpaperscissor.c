#include<stdio.h>
#include <time.h>
#include <stdlib.h>


int generateRandoms(int lower, int upper, int count) 
{ 
    int i, num; 
    for (i = 0; i < count; i++) { 
        num = (rand() % 
           (upper - lower + 1)) + lower; 
    } 
    return num;
} 
  
int main() {
    srand(time(0));
    int n = generateRandoms(1,3,1);
    int choice;

    printf("------ROCK PAPER SCISSORS----------\n");
    printf("Enter 1 for rock, 2 for paper , 3 for scissors \n");
    scanf("%d", &choice);
    // printf("%d %d", choice, n);

    switch (choice) {
        case 1:
            if(n==1) {
                printf("Tie, both chose rocks\n");
            }

            else if (n==2) {
                printf("You won, computer chose paper\n");
            }

            else if (n==3) {
                printf("You won, computer chose scissors\n");
            }

            break;
        case 2:
            if(n==1) {
                printf("You won, computer chose rocks\n");
            }

            else if (n==2) {
                printf("Tie, both chose papers\n");
            }

            else if (n==3) {
                printf("You lost, computer chose scissors\n");
            }

            break;
        case 3:
            if(n==1) {
                printf("You lost, computer chose rocks\n");
            }

            else if (n==2) {
                printf("You won, computer chose papers\n");
            }

            else if (n==3) {
                printf("Tie\n");
            }
            break;
    }

    return 0;
}