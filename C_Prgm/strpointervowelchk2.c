// print a word and the word have any vowels ,print that vowels using pointer
#include <stdio.h>

int main()
{
     char str[50];
    char *p= str;
    printf("nter a string : ");
    scanf("%s",&str);
    printf("string name :%s\n",str);
    printf("print vowels: \n");
    while (*p!='\0')
    {
        if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u' || *p=='A' ||*p=='E' ||*p=='I' ||*p=='O'||*p=='U')
        {
          printf("%c\t",*p);
        }
        p++;
    }
    
}