//function with return value and with arguement for palindrome
#include<stdio.h>
int pal(int);//for return value we use 'int'
int main()
{
    int num,x;
    printf("nter a no : \n");
    scanf("%d",&num);
    x=pal(num);
    
}
int pal(int n)
{
   int rev=0,rem=0,ori;
   ori=n;
  while(n>0)
  {
      rem=n%10;
      rev=rev*10+rem;
      n=n/10;
  }
      if(ori==rev)
      {
          printf("it is palindrome\n");
      }
      else
      {
          printf("it is not palindrome\n");
      }
      
  
   return rev;
   
}