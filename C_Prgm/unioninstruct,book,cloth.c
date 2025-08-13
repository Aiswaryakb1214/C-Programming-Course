//create a book store  and cloth store using union in struct
#include<stdio.h>
#include<string.h>
union book{
    char title[10];
    int pages;
    float price;
};
struct cloth{
    char brand[10][20];
    char type[10][20];
    float price[20];
    union book b;
};
int main()
{
    struct cloth c;
    union book b;
    int choice;
    int i=0,n;
    char title[10][20];
    int pages[20];
    float price[20];
    
    printf("nter no of details of items: ");
    scanf("%d",&n);
    printf("nter the choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        for(i=0;i<n;i++)
        {
            printf("nter the brand name: ");
            scanf("%s",&c.brand[i]);
        
            printf("nter the type of cloth: ");
            scanf("%s",&c.type[i]);
        
            printf("nter the price of cloth: ");
            scanf("%f",&c.price[i]);
        }
        printf("\n---Cloth Details---\n");
        for(i=0;i<n;i++)
        {
            printf("Brand name: %s\n",c.brand[i]);
            printf("Type of cloth: %s\n",c.type[i]);
            printf("Price of cloth: %.2f\n",c.price[i]);
            
        }
        break;
        case 2:
        for(i=0;i<n;i++)
        {
            printf("nter the book title: ");
            scanf("%s",&b.title);
            strcpy(title[i],b.title);
        
            printf("nter no of pages: ");
            scanf("%d",&b.pages);
            pages[i]=b.pages;
        
            printf("nter the price of book: ");
            scanf("%f",&b.price);
            price[i]=b.price;
            
        }
        printf("\n---Book Details---\n");
        for(i=0;i<n;i++)
        {
            printf("Book title: %s\n",title[i]);
            printf("Book pages: %d\n",pages[i]);
            printf("Price of book: %.2f\n",price[i]);
            
        }
        break;
        default:
        printf("Invalid choice");
        
    }
}
