// print the word by giving user input as multiple and length of the words
#include <stdio.h>
#include<string.h>
int main()
{
    int i,x,n=3;
    char a[30][30];
    printf("nter a word: \n");
    for(i=0;i<n;i++)
    {
    scanf("%s",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    x=strlen(a[i]);
    printf("length of word '%s' : %d\n",a[i],x);  
    }
    
}