#include <stdio.h>
int main() {
    float length,breadth,area;

    //ask user for input
    printf("Enter lenght:");
    scanf("%f",&length);

    printf("Enter breadth:");
    scanf("%f",&breadth);
    
    //perform area of rectangle
    area = length * breadth;

    //display result
    printf("The area is %.2f\n",area);

    return 0;

}