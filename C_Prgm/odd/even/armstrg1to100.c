
#include <stdio.h>

int main() 
{
    int num,num1,rem,result,start,end;
    printf("nter a start digit \n");
    scanf("%d",&start);
    printf("nter a end digit \n");
    scanf("%d",&end);
   printf("print armstrong no %d btw %d \n",start,end);
    while(start<=end)
    {
        num=start;
        num1=num;
        result=0;
        
    
         while(num1>0)
       {
       rem=num1%10;
       result=result+(rem*rem*rem);
       num1=num1/10;
      
        }
       if(result==num)
        {
         printf("armstrong nos are %d\n",result);
        }
        start++;
    }
  
   
    
    
}
    