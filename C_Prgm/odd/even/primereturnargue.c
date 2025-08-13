//function with return value and with arguement for prime
#include<stdio.h>
int prime(int);//for return value we use 'int'
int main()
{
    int num,x,f;
    printf("nter a no : \n");
    scanf("%d",&num);
    x=prime(num);
     
    
}
int prime(int n)
{
   int f=1,i=2;
  
  while(n>i)
  {
      if(n%i==0)
      {
          f=0;
          break;
      }
      i++;
  }
  if(f)
      {
          printf("it is prime\n");
      }
      else
      {
          printf("it is not prime\n");
      }
     
      
  
   return f;
   
}