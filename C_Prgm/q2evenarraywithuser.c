//question is first we input 10 nos and we need two array functions ,first function is to check  the 10 nos are even numbers as a array and if inside that 10 nos even numbers is there it is call into second function and  need to print only the even numbers.
#include <stdio.h>
int chkev(int num);
void even(int a[],int n);
int main()
{
    int n=10;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    
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
    printf("the even nos are : \n");
    for(i=0;i<n;i++)
    {
        if (chkev(a[i]))
        {
        printf("%d\t",a[i]);
        }
    }
}
