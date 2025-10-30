#include <stdio.h>
int main() {
    int num1,num2,div;

    //ask user for input
    printf("Enter first number:");
    scanf("%d",&num1);

    printf("Enter second number:");
    scanf("%d",&num2);

    //perform division
    div = num1 / num2;

    //display result
    printf("The division of %d and %d is %d\n",num1,num2,div);

    return 0;
}