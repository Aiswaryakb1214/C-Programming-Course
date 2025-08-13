
#include <stdio.h>
int main() 
{
   int i,j,k;
   for(i=5;i>=1;i--)
   {
       printf("&  ");
       for(j=1;j<=i;j++)
       {
           if(i==j)
           {
               printf("&");
           }
           else 
           {
           printf(" ");
           }
       }
       printf("\n");
    }
   for(i=1;i<=5;i++)
   {
       printf("&  ");
       for(j=1;j<=i;j++)
       {
           if(i==j)
           {
               printf("&");
           }
           else
           {
               printf(" ");
           }
       }
      printf("\n");
   }
}