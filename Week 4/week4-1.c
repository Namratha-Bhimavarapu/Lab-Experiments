#include<stdio.h>
int main()
{
    int A,B,C,D,E,F,G,J,i,r1,r2,r3,r4;
    printf("Enter A,B,C,D,E,F,G,i, Values:");
    scanf("%d%d%d%d%d%d%d%d",&A,&B,&C,&D,&E,&F,&G,&i);
    r1=A+B*C+(D*E)+F*G;
    printf("\n A+B*C+(D*E)+F*G=%d",r1);
    r2=A/B*C-B+A*D/3;
    printf("\nA/B*C-B+A*D/3=%d",r2);
    r3=A+++B---A;
    printf("\n A+++B--A=%d",r3);
    r4=J=(i++)+(++i);
    printf("\n(i++)+(++i)=%d",r4);
}
