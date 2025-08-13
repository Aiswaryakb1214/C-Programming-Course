// Book Library Record,Create a structure to store information about a book:,Book Title,Author,Price,Number of pages,Accept details of 3 books and print the book with the highest price
#include <stdio.h>

struct book{
    char title[50][40];
    char author[50][40];
    float price[30];
    int pages[50];
};
int main() 
{
    struct book b1;
    int i=0;
    int pos=0;
    
    for(i=0;i<3;i++)
    {
        printf("nter title: ");
        scanf("%s",&b1.title[i]);
        
        printf("nter authorname: ");
        scanf("%s",&b1.author[i]);
        
        printf("nter the price: ");
        scanf("%f",&b1.price[i]);
        
        printf("nter no of pages: ");
        scanf("%d",&b1.pages[i]);
        
    }
    for (i=0;i<3;i++)
    {
        if(b1.price[i]>b1.price[pos])
        {
            pos=i;
        }
    }
     printf("\nHighest Price Book Info:\n");
    for (i = 0; i < 3; i++) 
    {
        if (b1.price[i] == b1.price[pos])
         {
            printf("\nTitle: %s\n", b1.title[i]);
            printf("Authorname: %s\n", b1.author[i]);
            printf("Price: %.2f\n", b1.price[i]);
            printf("No of pages: %d\n", b1.pages[i]);
        }
    }
    
}