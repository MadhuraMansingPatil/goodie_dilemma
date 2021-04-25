#include <stdio.h>
int main()
{
    int noOfProducts;
    scanf("%d",&noOfProducts);
    
    int price[noOfProducts], distance[noOfProducts], sku[noOfProducts];
    for(int i=0;i<noOfProducts;i++)
    {
        scanf("%d",&price[i]);
    }
    for(int i=0;i<noOfProducts;i++)
    {
        scanf("%d",&distance[i]);
    }
    for(int i=0;i<noOfProducts;i++)
    {
        scanf("%d",&sku[i]);
    }
    
    int final_Price[noOfProducts];
    int count =0;
    for(int i=0;i<noOfProducts;i++)
    {
        if(sku[i]>0)
        {
            final_Price[count]= price[i] * distance[i];
            count++;
        }
    }
        for(int i=0;i<count;i++)
        {
            printf("%d ", final_Price[i]);
        }
    return 0;
}
