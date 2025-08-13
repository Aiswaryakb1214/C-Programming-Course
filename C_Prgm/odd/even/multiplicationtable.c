
#include <stdio.h>

int main() 
{
    int num,i=1,mul;
    printf("nter a number \n");
    scanf("%d",&num);
    if(num<=0)
    {
        printf("don't print multiplication table\n");
    }
    while(i<=10)
    {
        mul=num*i;
        printf("%d * %d = %d\n",num,i,mul);
        i++;
        
    }
    
    
    
}
    