// Write a program to find the highest digits in a number using a while loop
#include <stdio.h>

int main()
{
    int num,highest=0,digit;
    printf("nter a no \n");
    scanf("%d",&num);
    if(num==0)
    {
       
        highest=0;
    }
    else
    {
        
    
       while(num!=0)
       {
           
        digit=num%10;//last digit
        if(digit>highest)
          {
            highest=digit;
          }
        
           num=num/10;
        }
       
        
    }
    printf("highest digit is : %d",highest);
   
        
    
    
}