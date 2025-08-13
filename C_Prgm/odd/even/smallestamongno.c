// Write a program to find the smallest digits in a number using a while loop
#include <stdio.h>

int main()
{
    int num,smallest=9,digit;
    printf("nter a no \n");
    scanf("%d",&num);
    if(num==0)
    {
       
        smallest=0;
    }
    else
    {
        
    
       while(num!=0)
       {
           
        digit=num%10;//last digit
        if(digit<smallest)
          {
            smallest=digit;
          }
        
           num=num/10;
        }
       
        
    }
    printf("smallest digit is : %d",smallest);
   
        
    
    
}