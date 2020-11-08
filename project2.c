#include<stdio.h>
// CodeWithHarry C language tutorial Excercise - 2
// Unit converter
int main() {
    printf("---------Unit converter-----------\n");
    int choice;
    float pounds, inches, km, cm;
    printf("1.Pounds to Kg\n2.Inches to meter\n3.Km to miles\n4. Cm to inches\n");
    printf("Enter your choice -> ");
    scanf("%d", &choice);
    // I am using switch case statements for convenience
    switch(choice){
        case 1:
            printf("Enter value in pounds -> ");
            scanf("%f", &pounds);
            printf("The value of %1.2f in Kgs is %1.3f\n", pounds, pounds/2.204);
            break;
        case 2:
            printf("Enter value in inches -> ");
            scanf("%f", &inches);
            printf("The value of %1.2f inches in meters is %1.3f\n", inches, inches/39.37);
            break;
        case 3:
            printf("Enter value in km -> ");
            scanf("%f", &km);
            printf("The value of %1.2f km in miles is %1.3f\n", km, km/1.609);
            break;
        case 4:
            printf("Enter value in cm -> ");
            scanf("%f", &cm);
            printf("The value of %1.2f cm in inches is %1.3f\n", cm, cm/2.54);
            break;
    }
    return 0;
}
