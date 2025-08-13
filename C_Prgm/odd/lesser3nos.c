#include<stdio.h>
int main()
{
    int a,b,c;
    printf("nter 3 no ");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
    {
        printf("a is lesser %d ",a);
    }
    else if (b<a && b<c)
    {
        printf("b is lesser %d ",b);
    }
    else
    {
        printf("c is lesser %d ",c);
    }
}