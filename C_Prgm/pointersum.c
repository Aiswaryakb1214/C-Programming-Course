// print the sum of 2 nos using pointers
#include <stdio.h>

int main()
{
    int a,s=0,b;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    printf("nter 2 no\n");
    scanf("%d%d",&a,&b);
    s=*p1+*p2;
    printf("sum : %d",s);
   
}