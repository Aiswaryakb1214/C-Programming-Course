//pyramid pattern
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=4;i>=1;i--)//rows
    {
        for(j=1;j<=i;j++)// for space
        {
            printf(" ");
        }
        for(k=4;k>=i;k--)// for print star
        {
            printf(" *");
        }
        printf("\n");
    }
   
}
