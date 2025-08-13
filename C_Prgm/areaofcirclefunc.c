// Pass Result Between Functions
#include <stdio.h>
#define PI 3.14
void area(int b);
int result(float r);
int main() 
{
    float r;
    int x;
    printf("nter a digit as radius : ");
    scanf("%f",&r);
    x=result(r);
    area(x);
}
int result(float r)
{
    int a;
    a=PI*r*r;
    return a;
}
void area(int b)
{
   
    if (b>=100)
    {
        printf(" it is large area : %d\n",b);
    }
    else
    {
        printf("it is smaller area : %d\n",b);
    }
}