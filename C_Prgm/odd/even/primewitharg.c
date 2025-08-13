// function with arguement of prime
#include <stdio.h>
void prime();
int main() 
{
    prime();
}
void prime()
{
    int num,i=2,flag=1;
    printf("nter a num\n");
    scanf("%d",&num);
    while(i<num)
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
        i++;
        if(flag)
        {
            printf("it is prime\n");
        }
        else
        {
            printf("it is not prime\n");
        }
        
    }
}
   