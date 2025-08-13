// print the word by giving user input and reverse the word 
#include <stdio.h>
#include<string.h>
int main()
{
    int i,x,temp;
    char a[30],ori[30];
    printf("nter a word: \n");
    scanf("%s",&a);
    
    
    x=strlen(a);
    for(i=0;i<x/2;i++)
    {
    temp=a[i];
    a[i]=a[x-i-1];
    a[x-i-1]=temp;
    }
    printf("the word : %s\n",a);
}