//find largest element
#include <stdio.h>
int main() 
{
    int n, i, a[100],num,j;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    num=a[0];
    for(j=0;j<n;j++)
    {
        
        if(num<a[j])
        {
            num=a[j];
        }
    }
    printf("largest: %d",num);
    
}
