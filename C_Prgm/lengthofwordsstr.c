// print the word by giving user input and length of the words
#include <stdio.h>
#include<string.h>
int main()
{
    int i,x;
    char a[5][10]={"abcd","bcdef","cdeghi","def"};
   
   
     x=strlen(a[2]);
     printf("length of word '%s' : %d",a[2],x);
}