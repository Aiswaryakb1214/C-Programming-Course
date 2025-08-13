
#include <stdio.h>

int main() 
{
    int start,end,a,rev,rem,c;
    printf("nter a start digit no \n");
    scanf("%d",&start);
    printf("nter a end digit no\n");
    scanf("%d",&end);
    printf("print the digit %d to %d \n",start,end);
    for(c=start;c<=end;c++)
    {
        
    
    
       a=c;
      
       rev=0;
       while(a!=0)
     {
       rem=a%10;
       rev=rev*10+rem;
       a=a/10;
      
     }
       
   
       if(rev==c)
       {
        
        printf("%d it is a palindrome no \n",c);
       }
      
      
    }
    
    
}
    