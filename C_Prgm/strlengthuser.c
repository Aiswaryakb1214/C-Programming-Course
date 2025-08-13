//to print length of userinput
#include<stdio.h>
#include<string.h>
int main()
{
    int x;
    char name[20];
    printf("nter the name: ");
    scanf("%s",&name);
    x=strlen(name);
    printf("%d",x);
}