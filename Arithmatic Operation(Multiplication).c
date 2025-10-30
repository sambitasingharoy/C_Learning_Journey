#include <stdio.h>
int main()
{
    int num1, num2, mul;

    // ask user for input
    printf("Enter first number:");
    scanf("%d", &num1);

    printf("Enter second number:");
    scanf("%d", &num2);

    // perform multiplication
    mul = num1 * num2;

    //display result
    printf("The multiplication of %d and %d is %d\n",num1,num2,mul);

    return 0;
}