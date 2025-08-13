// swap 2 nos using pointers
#include <stdio.h>

int main()
{
    int a,temp=0,b;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("after swap\n");
    printf("a: %d,b: %d",a,b);
   
}