// with return value and wothout arguement
#include <stdio.h>
int add();
int main() 
{
    int x;
    x=add();
    printf("%d",x);
}
int add()
{
    int a=5,b=6,c;
    c=a+b;
    return c;
}