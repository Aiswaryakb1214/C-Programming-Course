//bubble sort in increasing order
#include <stdio.h>
int main() 
{
    int n, i, a[100],j,temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if (a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(j=0;j<n;j++)
    {
        printf("%d\t",a[j]);
    }
    
}
