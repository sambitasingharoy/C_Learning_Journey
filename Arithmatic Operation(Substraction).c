#include <stdio.h>
int main() {
    int num1,num2,sub;

    //ask user for input
    printf("Enter first number:");
    scanf("%d",&num1);

    printf("Enter second number:");
    scanf("%d",&num2);

    //perform substraction
    sub = num1-num2;

    //display result
    printf("The substraction of %d and %d is %d\n",num1,num2,sub);

    return 0;
}