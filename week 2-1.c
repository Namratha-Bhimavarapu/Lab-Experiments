#include <stdio.h>

int main()
{
    float a,b,c,s,avg;
    printf("\nenter three numbers:");
    scanf("\n%f%f%f",&a,&b,&c);
    s=a+b+c;
    printf ("\n the sum is %f",s);
    avg=s/3;
    printf("\n the avg is %f",avg);
}
