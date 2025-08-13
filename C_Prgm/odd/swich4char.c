#include<stdio.h>
int main()
{
   int a,b,c,num,no;
   char choice;
   printf(" a: largest among the no\n b: smallest among nos\n c: odd or even\n d: positive or negative\n");
   printf("choose option\n");
   scanf("%c",&choice);
   switch(choice)
   {
       case 'a':
       printf("nter 3 nos\n");
       scanf("%d%d%d",&a,&b,&c);
       if(a>b && a>c)
       {
           printf("a is largset %d ",a);
       }
       else if(b>a && b>c)
       {
           printf("b is largest %d",b);
       }
       else
       {
           printf("c is largest %d",c);
       }
       break;
       case 'b':
       printf("nter 3 nos\n");
       scanf("%d%d%d",&a,&b,&c);
       if(a<b && a<c)
       {
           printf("a is smallest %d ",a);
       }
       else if(b<a && b<c)
       {
           printf("b is smallest %d",b);
       }
       else
       {
           printf("c is smallest %d",c);
       }
       break;
       case 'c':
       printf("nter the nos\n");
       scanf("%d",&num);
       if(num%2==0)
       {
           printf("it is a even no %d",num);
       }
       else if(num%2!=0)
       {
           printf("it is a odd %d",num);
       }
       else
       {
           printf("it is zero\n");
       }
       break;
       case 'd':
       printf("nter a no\n");
       scanf("%d",&no);
       if(no>=1)
       {
           printf("it is a positive no %d",no);
       }
       else if(no<=-1)
       {
           printf("it is a negative no %d");
       }
       else
       {
           printf("it is zero");
       }
       break;
       default:
       printf("error");
       
       
       
       
   }
}