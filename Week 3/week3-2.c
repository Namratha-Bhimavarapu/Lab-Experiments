#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,ci, amount;
    printf("\n Enter the principal amount,rate of interest and time period:");
    scanf("%f%f%f",&p,&r,&t);
    amount=p*pow((1 +r / 100),t);
    ci=amount-p;
    printf("\n total amount=%.2f", amount);
    printf ("\n Compound interest=%.2f",ci);
    return 0;
}


