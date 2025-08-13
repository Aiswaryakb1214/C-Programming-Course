//array prgm to print sum of 6 numbers with position
#include<stdio.h>
int main ()
{
    int a[6]={10,20,30,40,50,60};
    int i,sum=0;
    printf("nos are :\n");
    for(i=0;i<6;i++)
    {
        sum=sum+a[i];
   
    }
     printf("a[%d] : %d\n",i,sum);
}