// to call the function using pointer
#include <stdio.h>
void name();
int main() 
{
    void(*p)()=name;
    p();
    
}
void name()
{
    
    printf("hello world\n");
    
}