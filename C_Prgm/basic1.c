#include<stdio.h>
int main()
{
    int a=5,b=8,c=0;
    printf("%d %d %d\n",a,b,c);
    c=a+b;
    printf(" %d+%d=%d\n",a,b,c);
    c=a-b;
    printf(" %d-%d=%d\n",a,b,c);
    c=a*b;
    printf("%d*%d=%d\n",a,b,c);
    c=a/b;
    printf("%d / %d = %d",a,b,c);
}