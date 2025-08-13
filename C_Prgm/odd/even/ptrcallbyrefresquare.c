// call by reference of square no using pointer
#include <stdio.h>
void square(int *);
int main() 
{
   int n=5;
   square(&n);//address of n
}
void square(int *x)//int x is a copy of n and it receive as a pointer to get the value n we can put any value instead of x(n),int *n=&n;
{
    *x=(*x)*(*x);
    printf("square = %d",*x);
}