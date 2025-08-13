// print the word by giving user input and reverse the word and need to check it is palindrome or not
#include <stdio.h>
#include<string.h>
int main()
{
    int i,x,temp;
    char a[30],ori[30];
    printf("nter a word: \n");
    scanf("%s",&a);
    strcpy(ori,a);
    
    x=strlen(a);
    for(i=0;i<x/2;i++)
    {
    temp=a[i];
    a[i]=a[x-i-1];
    a[x-i-1]=temp;
    }
    printf("the word : %s\n",a);
    if(strcmp(a,ori)==0)
    {
        printf("it is palindrome\n");
    }
    else
    {
        printf("it is not palindrome");
    }
}