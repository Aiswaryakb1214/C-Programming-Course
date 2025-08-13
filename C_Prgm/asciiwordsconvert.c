//if we enter the a small letter character it needs to convert capital letter
#include<stdio.h>
int main()
{
    char n,s,p;
    printf("nter the character: ");
    scanf("%c",&n);
    if (n>='a' && n<='z')
    {
        s=n-32;
        printf("%c",s);
    }
    else if (n>='A' && n<='Z')
    {
        p=n+32;
        printf("%c",p);
    }
    else
    {
        printf("noo conversion");
    }
}