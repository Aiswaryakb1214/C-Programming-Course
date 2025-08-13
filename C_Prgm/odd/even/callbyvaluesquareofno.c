// call by value of square no
#include <stdio.h>
void square(int);
int main() 
{
   int n=5;
   square(n);
}
void square(int x)//int x is a copy of n
{
    x=x*x;
    printf("square = %d",x);
}