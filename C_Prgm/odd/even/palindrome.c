
#include <stdio.h>

int main() 
{
    int a,rev=0,rem,c;
    printf("nter a two digit no \n");
    scanf("%d",&a);
    c=a;
    
    while(a>0)
    {
       rem=a%10;
       rev=rev*10+rem;
       a=a/10;
      
    }
    printf("rev is %d\n",rev);
   
    if(rev==c)
     {
        
        printf("palindrome\n");
     }
    else
     {
        printf("not palindrome");
     }
    
    
}
    