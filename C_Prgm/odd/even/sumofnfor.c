// sum of natural nos
#include <stdio.h>

int main()
{
    int num,i,c=0;
    printf("nter a no\n");
    scanf("%d",&num);
    
    while(num<=0)
    {
        printf("dont print\n");
    }
    
     for(i=1;i<=num;i++)
      {
        c=c+i;
       
      }
     printf("sum of %d natural nos \n sum is %d\n",num,c);

}