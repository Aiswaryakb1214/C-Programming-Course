// Create a details for a product:,Product Name,Product ID,Quantity in Stock,Price per Unit,,Accept details of 3 products and calculate the total value (quantity × price) of each product using union
#include<stdio.h>
#include<string.h>

union product{
    char name[10];
    int id;
    int quan;
    float price;
};
int main()
{
    union product p;
    
    char names[10][30];//10 names, 29 characters max;
    int id[10];
    int quan[10];
    float price[10];
    
    int i=0;
    float total[10];
    for(i=0;i<3;i++)
    {
        printf("nter the name: ");
        scanf("%s",&p.name);
        strcpy(names[i],p.name);
        
        printf("nter the id: ");
        scanf("%d",&p.id);
        id[i]=p.id;
        
        printf("nter the quantity: ");
        scanf("%d",&p.quan);
        quan[i]=p.quan;
        
        printf("nter the price: ");
        scanf("%f",&p.price);
        price[i]=p.price;
    }
    printf("\nProduct Details\n");
    for(i=0;i<3;i++)
    {
        total[i]=quan[i]*price[i];
    
    
        printf("Name: %s\n",names[i]);
        printf("Id: %d\n",id[i]);
        printf("Quantity: %d\n",quan[i]);
        printf("Price: %.2f\n",price[i]);
        printf("Total value: %.2f\n",total[i]);
    }
}