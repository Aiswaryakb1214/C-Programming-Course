// to print the value using pointer to pointer
#include <stdio.h>

int main() 
{
    int age;
   printf("nter a age: ");
   scanf("%d",&age);
   int *ptr=&age;
   int **pptr=&ptr;
   printf("%d\n",age);
   printf("%d\n",&ptr);
   printf("%d\n",*ptr);
   printf("%d\n",**pptr);
   printf("%p\n",ptr);// address in hexadecimal
   printf("%u\n",pptr);// address in digits
   
    
    
}