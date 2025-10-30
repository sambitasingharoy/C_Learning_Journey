#include <stdio.h>
int main() {
    float length,breadth,perimeter;

    //ask user for input
    printf("Enter the length:");
    scanf("%f",&length);

    printf("Enter the breadth:");
    scanf("%f",&breadth);

    //calculate the perimeter of rectangle
    perimeter = 2*(length + breadth);

    //display result
    printf("the perimeter is %.2f",perimeter);

    return 0;


}