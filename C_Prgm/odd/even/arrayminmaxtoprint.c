// question is to print the minimum and maximum value from the fixed input sequence
#include <stdio.h>

int main()
{
    int a[10]={34,76,87,12,99,23,67};
    int i=0,min=a[0],max=a[0];
    printf("input values: \n");
    for(i=0;i<7;i++)
    {
        printf("%d\t",a[i]);
        if(a[i]>max)
        {
            max=a[i];
        }
        
        if (a[i]<min)
        {
            min=a[i];
        }
        
    }
    printf("\nMaximum value: %d\n",max);
    printf("Minimum value: %d\n",min);
    
}