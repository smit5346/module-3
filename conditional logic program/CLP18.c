//18. Write a C program to calculate profit and loss on a transaction.
#include <stdio.h>

int main() 
{
    float costPrice, sellingPrice, profitLoss;

    
    printf("Enter the cost price of the item: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price of the item: ");
    scanf("%f", &sellingPrice);

    
    if (sellingPrice > costPrice) 
	{
        profitLoss = sellingPrice - costPrice;
        printf("Profit: %.2f\n", profitLoss);
    } 
	else if (costPrice > sellingPrice) 
	{
        profitLoss = costPrice - sellingPrice;
        printf("Loss: %.2f\n", profitLoss);
    } 
	else 
	{
        printf("No profit, no loss.\n");
    }

    return 0;
}

