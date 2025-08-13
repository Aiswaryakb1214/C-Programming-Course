//diamond shape pattern
#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(i=10;i>=1;i--)//rows
    {
        for(j=1;j<=i;j++)// for space
        {
            printf(" ");
        }
        for(k=10;k>=i;k--)// for print star
        {
            printf(" *");
        }
        printf("\n");
    }
     for(i=1;i<=10;i++)//rows
    {
        for(j=1;j<=i;j++)// for space
        {
            printf(" ");
        }
        for(l=10;l>=i;l--)// for print star
        {
            printf(" *");
        }
        printf("\n");
    }
    
   
}
