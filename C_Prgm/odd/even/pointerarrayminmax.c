// question is to print the minimum and maximum value from the fixed input sequence using pointer
#include <stdio.h>

int main()
{
    int a[10]={34,76,87,12,99,23,67},max=a[0],min=a[0];
    int *p=a,*p1=&max,*p2=&min;
    int i=0;
    printf("input values: \n");
    for(i=0;i<7;i++)
    {
        printf("%d\t\n",*(p+i));
        if(*(p+i)>*p1)
        {
            *p1=*(p+i);
            
        }
        if(*(p+i)<*p2)
        {
            *p2=*(p+i);
            
        }
        
    }
    printf("max value: %d\n",*p1);
    printf("min value: %d\n",*p2);
}