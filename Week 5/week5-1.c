# include <stdio.h>
int main()
{
    int a,b,c,d,max,min;
    printf("Enter 4 numbers");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    max=a;
    min=a;
    if(max<b)
    max=b;
    else if(min>b)
    min=b;
    if(max<c)
    max=c;
    else if(min>c)
    min=c;
    if(max<d)
    max=d;
    else if ( min>d)
    min=d;
    printf("\n maximum number=%d",max);
    printf("\n minimum number=%d",min);
    return 0;
}
