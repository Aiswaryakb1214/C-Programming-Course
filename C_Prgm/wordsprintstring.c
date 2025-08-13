// print the word by giving user input
#include <stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[5][5]={"abc","bcd","cde","def"};
    for(i=0;i<4;i++)
    {
    printf("%s\t",a[i]);
    }
}