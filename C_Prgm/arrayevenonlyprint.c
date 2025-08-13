//question is we need two array functions ,first function is to check even numbers as a array and if its even numbers it is call into second function and  need to print only the even numbers.
#include <stdio.h>
int chkev(int num);
void even(int a[],int n);
int main()
{
    int n,i,a[100];
    printf("enter the elements: ");
    scanf("%d",&n);
    
    printf("enter the nos: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    even(a,n);
}
int chkev(int num)
{
    if(num%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
        
}
void even(int a[],int n)
{
    int i;
    printf("the even nos are : ");
    for(i=0;i<n;i++)
    {
        if (chkev(a[i]))
        {
        printf("%d\t",a[i]);
        }
    }
}
