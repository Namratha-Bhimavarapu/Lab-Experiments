#include <stdio.h>

int main()
{
    float f,c;
    printf("\n enter fahrenheit:");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("\n celcius=%.2f",c);
    printf ("\n enter celcius");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("\n fahrenheit=%.2f",f);
    return 0;
}