#include <stdio.h>
int main() {
    int num1,num2,sum;

    //ask user for input
    printf("Enter first number:");
    scanf("%d",&num1);

    printf("Enter second number:");
    scanf("%d",&num2);

    //perform addition
    sum = num1 + num2;

    //display result
    printf("The addition of %d and %d is %d\n",num1,num2,sum);

    return 0;
}