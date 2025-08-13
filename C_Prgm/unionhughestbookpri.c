// // Book Library Record,Create a structure to store information about a book:,Book Title,Author,Price,Number of pages,Accept details of 3 books and print the book with the highest price using union

#include<stdio.h>
#include<string.h>

union book{
    char name[10];
    char author[10];
    int pages;
    float price;
};
int main()
{
    union book b;
    
    char name[10][30];//10 names, 29 characters max;
    char author[10][20];
    int pages[10];
    float price[10];
    
    int i=0;
    int pos=0;
    for(i=0;i<3;i++)
    {
        printf("nter the name: ");
        scanf("%s",b.name);
        strcpy(name[i],b.name);
        
        printf("nter the author: ");
        scanf("%s",&b.author);
        strcpy(author[i],b.author);
        
        printf("nter the pages: ");
        scanf("%d",&b.pages);
        pages[i]=b.pages;
        
        printf("nter the price: ");
        scanf("%f",&b.price);
        price[i]=b.price;
    }
    for(i=0;i<3;i++)
    {
        if(price[i]>price[pos])
        pos=i;
    }
    printf("\nBook(s) with Highest Price:\n");
    for(i = 0; i < 3; i++)
     {
        if(price[i] == price[pos])
         {
            printf("\nName: %s\n", name[i]);
            printf("Author: %s\n", author[i]);
            printf("Pages: %d\n", pages[i]);
            printf("Price: %.2f\n", price[i]);
        }
    }
     printf("size of union: %zu",sizeof(b));
}