
#include <stdio.h>

int main() 
{
    int num=2,num1,prime;
    printf("print 1 to 100 \n");
    while(num<=100)
    {
         int  i=2;
         num1=num;
         prime=1;
    
       while(i<num1)
      {
        if(num%i==0)
        {
        prime=0;
        break;
        }
        i++;
      }
    
       if(prime)
      {
        printf("%d\t",num);
       }
     num++;
    }
      
}
    