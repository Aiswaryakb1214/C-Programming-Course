// print fixed user hello world and if it have any vowels ,print that vowels using pointer
#include <stdio.h>

int main()
{
     char str[50]={"helloworld"};
    char *p= str;
    printf("string name :%s\n",str);
    printf("print vowel only: \n");
    while (*p!='\0')
    {
        if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u' || *p=='A' ||*p=='E' ||*p=='I' ||*p=='O'||*p=='U')
        {
          printf("%c\t",*p);
        }
        p++;
    }
    
}