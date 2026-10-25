#include<stdio.h>
int main()
{
    int a,b,c,d,e,total;
    float avg;
    printf("Enter the five subjects marks:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    printf("\n the total marks=%d",total);
    avg=total/5.0;
    printf("\n the average=%.2f", avg);
}