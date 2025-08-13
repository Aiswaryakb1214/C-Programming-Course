// Function to swap two numbers using a function (with call by value).
#include <stdio.h>
int swap(int c,int d);
int main()
{
    int a,b,x;
    printf("nter the nos : ");
    scanf("%d%d",&a,&b);
    x=swap(a,b);
    
    
}
int swap(int c,int d)
{
    int temp=0;
    temp=c;
    c=d;
    d=temp;
    printf("1st :%d , 2nd: %d",c,d);
    return c,d;
}
