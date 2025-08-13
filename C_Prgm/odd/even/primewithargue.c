// function with arguement of prime
#include <stdio.h>
void prime(int);
int main() 
{
    int num;
    printf("nter a num\n");
    scanf("%d",&num);
    prime(num);
}
void prime(int x)
{
    int i=2,flag=1;
    while(i<x)
    {
        if(x%i==0)
        {
            flag=0;
            break;
        }
        i++;
    }
        if(flag==1)
        {
            printf("it is prime\n");
        }
        else 
        {
            printf("it is not prime\n");
        }
       
    
}
   