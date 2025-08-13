
#include <stdio.h>

int main() 
{
    int num,num1,rem,result=0;
    printf("nter a three digit no \n");
    scanf("%d",&num);
    num1=num;
    
    while(num1>0)
    {
       rem=num1%10;
       result=result+(rem*rem*rem);
       num1=num1/10;
      
    }
   if(result==num)
   {
       printf("it is a armstrong no \n");
   }
   else
   {
       printf("it is not a armstrong no ");
   }
   
    
    
}
    