// change a variable’s value using its pointer.
#include <stdio.h>

int main()
{
    int a=20;
    int *p;
    p=&a;
    *p=30;
    printf(" new variable: %d\n new address : %p\n",a,&a);
   
}