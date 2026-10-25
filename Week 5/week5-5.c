#include<stdio.h>
int main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    if(n%4==0)
    printf("leap year");
    else
    printf("Not leap year");
}