
#include<stdio.h>
int main()
{
    int a,b,c;
    float d;
    printf("enter 2 number ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Addition : %d\n",c);
    c=a-b;
    printf(" Subtraction : %d\n",c);
    c=a*b;
    printf(" Multiplication :%d\n",c);
    d=float a/b;
    printf(" Division : %f\n",d);
    c=a%b;
    printf("Modulus : %d\n",c);
}