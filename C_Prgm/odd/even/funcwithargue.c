// function with arguement
#include <stdio.h>
void add(int,int);
int main() 
{
   int a,b;
   printf("nter a no\n");
   scanf("%d%d",&a,&b);
   add(a,b);
}
void add(int x, int y)
{
    int s;
    s=x+y;
    printf("%d\n",s);
}