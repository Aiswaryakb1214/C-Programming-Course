#include<stdio.h>
int main()
{
   int a;
    printf("it divides by 3 n will get zero rem\n");
    for(a=0;a<=100;a++)
   
  
   {
        
       if(a%3==0)
       {
          
          printf("%d\t",a);
       }
        
       
   }
   
   a=0;//for odd block we need to initialise a=0 becoz it needs to print 0 onwards
   printf("\nit divides by 5 n will get zero rem \n");
   for(a=0;a<=100;a++)
   
   
    {
        if(a%5==0)
         {
           
           printf("%d\t",a); 
          
         }
       
       
    }
    a=0;
     printf("\nit divides by 7 n will get zero rem \n");
    for(a=0;a<=100;a++)
    {
        if(a%7==0)
        {
         printf("%d\t",a);  
        }
    }
     
       
       
   
}