#include <stdio.h>
int main() {
    int num,cube;

    //ask user for input
    printf("Enter the number:");
    scanf("%d",&num);

    //perform cube of num
    cube = num * num * num;

    //display result
    printf("The cube of num is %d\n",cube);

    return 0;
}