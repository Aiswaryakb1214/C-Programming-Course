// Check Prime and Then Print All Primes in a Range
#include <stdio.h>
void prime(int n);
void range(int a,int b);
int main() 
{
    int x,y;
    printf("Enter range start and end: ");
    scanf("%d%d", &x, &y);
    range(x,y);
}
void range(int a,int b)
{
    for(a=2;a<=b;a++)
    {
       prime(a); 
    }
    
}
void prime(int z)
{
    int f=1,i=2;
    
    while(z>i)
    {
        
        if(z%i==0)
        {
            f=0;
            break;
        }
        i++;
    }
    if(f)
    {
        printf("%d\t",z);
    }
    
    
}