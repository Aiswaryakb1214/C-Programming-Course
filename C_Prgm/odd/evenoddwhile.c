#include<stdio.h>
int main()
{
   int a=0;
   while(a<=100)
   {
       if(a%2==0)
       {
           printf("it is a even no ");
           printf("%d\n",a);
       }
       else
       {
           printf("it is a odd no ");
           printf("%d\n",a);
       }
      
       
       a++;
   }
}