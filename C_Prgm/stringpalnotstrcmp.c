// print the word by giving user input and reverse the word and palindrome
#include <stdio.h>
#include<string.h>
int main()
{
    int i,x,temp,flag=1;
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
    for(i=0;i<x;i++)
    {
        if(a[i]!=ori[i])
       {
        flag=0;
        break;
       }
    }
    if (flag==1)
    {
        printf("palindrome\n");
    }
    else
    {
        printf("not palindrome");
    }
}