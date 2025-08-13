#include<stdio.h>
int main()
{
    char n;
    int m,a,b,c,d,e,avg;
   
    printf(" nter the name\n ");
    scanf("%c",&n);
    printf("nter the roll no\n");
    scanf("%d",&m);
    printf("nter the english marks\n"); 
    scanf("%d",&a);
    printf("nter the maths marks\n ");
    scanf("%d",&b);
    printf("nter the hindi marks\n"); 
    scanf("%d",&c);
    printf("nter the french marks\n"); 
    scanf("%d",&d);
    printf("nter the malayalam marks\n");
    scanf("%d",&e);
    avg=(a+b+c+d+e)/5;
    if(avg>=70)
    {
    printf(" the student is passed  with %d marks ,out of 100 ",avg);
    }
    else
    {
        printf("the student is failed");
    }
}