//function is calling inside a function ,sum of 2 nos sum is divided by 2 to get ans
#include<stdio.h>
int divi();
int add();//for return value we use 'int'
int main()
{
    int z;
    z=divi();
    printf("%d",z);
    
   
}
int add()
{
    int a,b,x;
    printf("nter a no : \n");
    scanf("%d%d",&a,&b);
   int s;
   s=a+b;
   return s;
}
int divi()
{
    int e;
    e=add();
    e=e/2;
    return e;
}
    