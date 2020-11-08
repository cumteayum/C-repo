#include<stdio.h>
// Syntax -- struct struct_name { data_type name };
struct Student {
    int id;
    float marks;
    char name[20];
    char std;
};

int main() {
    // Method one by one by one definations
    // struct Student ishan;
    // ishan.id = 10;
    // ishan.marks = 96.67f;
    // ishan.std = 'a';

    struct Student ishan = {20,97.55,"Ishan Nagar", 'a'};
    printf("%d %f %c %s", ishan.id, ishan.marks, ishan.std, ishan.name);
    return 0;
}