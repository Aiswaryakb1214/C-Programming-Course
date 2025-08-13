// sum of natural nos
#include <stdio.h>

int main()
{
    int num,i,c;
    printf("nter a no\n");
    scanf("%d",&num);
    
    while(num<=0)
    {
        printf("dont print\n");
    }
    for(i=1;i<=num;i++)
    {
        c=num*(num+1)/2;
       
    }
     printf("sum of %d natural nos \n sum is %d\n",num,c);
}