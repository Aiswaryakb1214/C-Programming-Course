// print hello world using pointer
#include <stdio.h>

int main()
{
     char str[50];
    int len;
    int *p=&len;
    printf("nter a string :");
    scanf("%s",&str);
    while (str[*p]!='\0')
    {
     (*p)++;
    }
    printf("string  name : %s\n",str);
    printf(" length of string : %d\n",*p);
}