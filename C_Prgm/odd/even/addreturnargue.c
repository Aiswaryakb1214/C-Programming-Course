//function with return value and with arguement to add two numbers
#include<stdio.h>
int add(int,int);//for return value we use 'int'
int main()
{
    int a,b,x;
    printf("nter a no : \n");
    scanf("%d%d",&a,&b);
    x=add(a,b);
    printf("%d",x);
}
int add(int x,int y)
{
   int s;
   s=x+y;
   return s;
}