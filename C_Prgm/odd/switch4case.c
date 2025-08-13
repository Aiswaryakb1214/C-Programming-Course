#include<stdio.h>
int main()
{
   int a,b,c,num,choice,no;
   printf("1: largest among the no\n 2: smallest among nos\n 3: odd or even\n 4: positive or negative\n");
   printf("choose option\n");
   scanf("%d",&choice);
   switch(choice)
   {
       case 1:
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
       case 2:
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
       case 3:
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
       case 4:
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