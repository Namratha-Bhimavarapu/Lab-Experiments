#include <stdio.h>

int main()
{
    float p,r,t,SI;
    printf("\nenter principal amount,rate of interest,time period:");
    scanf("%f%f%f",&p,&r,&t);
    SI=p*r*t/100;
    printf("\n the Simple interest=%.2f",SI);
    return 0;
}