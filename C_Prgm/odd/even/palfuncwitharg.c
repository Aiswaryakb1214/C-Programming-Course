// function with arguement of palindrome
#include <stdio.h>
void pal(int);
int main() 
{
   int num;
   printf("nter a no\n");
   scanf("%d",&num);
   pal(num);
}
void pal(int x)
{
    int rev=0,rem=0,ori;
    ori=x;
    while(x>0)
    {
        rem=x%10;
        rev=rev*10+rem;
        x=x/10;
    }
    if(ori==rev)
    {
        printf("it is palindrome\n");
    }
    else
    {
        printf("it is not palindrome\n");
    }
}
