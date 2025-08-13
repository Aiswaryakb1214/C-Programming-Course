#include<stdio.h>
int main()
{
   int a;
    printf("it is a even no \n");
    for(a=0;a<=50;a++)
   
  
   {
        
       if(a%2==0)
       {
          
          printf("%d\n",a);
       }
        
       
   }
   
   a=0;//for odd block we need to initialise a=0 becoz it needs to print 0 onwards
   printf("it is a odd no \n");
   for(a=0;a<=50;a++)
   
   
    {
        if(a%2!=0)
         {
           
           printf("%d\n",a); 
          
         }
       
       
    }
     
       
       
   
}