
#include <stdio.h>

int main() 
{
    int a,rev=0,rem;
    printf("nter a two digit no \n");
    scanf("%d",&a);
    while(a>0)
    {
       rem=a%10;
       rev=rev*10+rem;
       a=a/10;
    
            
    }
        printf("%d rev no ",rev);
}
    