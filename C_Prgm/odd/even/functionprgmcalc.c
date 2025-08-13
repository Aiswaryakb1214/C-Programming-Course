// function program for add,sub,mul,div
#include <stdio.h>
void add();
void sub();
void mul();
void div();
int main()
{
   add();
   sub();
   mul();
   div();
   
}
void add()



{
    int a,b,c=0;
    printf("nter two nos\n");
    scanf("%d%d",&a,&b);
    c=a+b;
     printf("Addition :%d\n",c);
}
void sub()
{
    int a,b,d=0;
    printf("nter two nos\n");
    scanf("%d%d",&a,&b);
    d=a-b;
     printf("Subtraction :%d\n",d);
}
     void mul()
     {
         int a,b,e=0;
    printf("nter two nos\n");
    scanf("%d%d",&a,&b);
    e=a*b;
     printf("Multiplication :%d\n",e);
     }
     void div()
     {
         int a,b,f=0;
    printf("nter two nos\n");
    scanf("%d%d",&a,&b);
    f=a/b;
    printf("Division :%d\n",f);
     }
