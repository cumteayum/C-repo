#include<stdio.h>
#include <string.h>

void printString(char str[]) {
    int i=0;
    while(str[i] != '\0') {
        printf("%c", str[i]);
        i++;
    }
}
int main() {
    char str[] = "Hello world";
    char str1[] = "Ishan";
    char str2[] = " Nagar";

    puts(strcat(str1, str2));
    printf("%d",strlen(str1));
    puts(strrev(str));

    // printString(str);
    return 0;
}