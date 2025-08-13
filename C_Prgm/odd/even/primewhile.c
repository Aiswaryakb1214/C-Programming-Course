// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int num,i=2,prime=1;
    printf("nter a no \n");
    scanf("%d",&num);
    if(num<=0)
    {
        printf("it is not prime %d\n",num);
    }
    while(i<num)
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
        printf("it is prime");
    }
    else
    {
        printf("it is not prime");
    }
}