#include<stdio.h>
int main()
{
    int a;
    printf("nter a value ");
    scanf("%d",&a);
    if (a>=1)
    {
        printf("it is positive");
    }
    else if (a<=-1)
         {
        printf("negative");
    }
    else if ( a==0)
    {
      printf("it is equal"); 
    }
}