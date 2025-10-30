#include <stdio.h>
int main() {
    int num,square;

    //ask user for input
    printf("Enter the number:");
    scanf("%d",&num);

    //perform square of num1
    square = num * num;

    //display result
    printf("The square is %d\n",square);

    return 0;
}