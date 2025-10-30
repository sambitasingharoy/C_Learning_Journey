#include <stdio.h>
int main() {
    float num1,num2,num3,average;

    //ask user for input
    printf("Enter first number:");
    scanf("%f",&num1);

    printf("Enter second number:");
    scanf("%f",&num2);

    printf("Enter third number:");
    scanf("%f",&num3);

    //perform average of three number
    average = (num1+num2+num3)/3;

    //display result
    printf("The average of three numbers is %f\n",average);

    return 0;
}