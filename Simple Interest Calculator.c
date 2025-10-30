#include <stdio.h>
int main() {
    float P,R,T,SI;

    //ask user for input
    printf("Enter principle:");
    scanf("%f",&P);

    printf("Enter rate:");
    scanf("%f",&R);

    printf("Enter time:");
    scanf("%f",&T);

    //perform simple interest
    SI = (P * R * T)/100;

    //display result
    printf("The SI is %.2f\n",SI);

    return 0;
}