
#include <stdio.h>

int main() 
{
    int num,num1,rem,result=0;
    printf("nter a three digit no \n");
    scanf("%d",&num);
    for(num1=num;num1>0;num1=num1/10)
    {
       rem=num1%10;
       result=result+(rem*rem*rem);
       
      
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
    