//30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe 
//minimum bill should be of Rs. 256/-
#include <stdio.h>

int main() 
{
    int customerID;
    char customerName[50];
    int unitsConsumed;
    float totalAmount;

  
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    
    if (unitsConsumed < 350) 
	{
        totalAmount = unitsConsumed * 1.20;
    } 
	else if (unitsConsumed >= 350 && unitsConsumed < 600) 
	{
        totalAmount = unitsConsumed * 1.50;
    } 
	else if (unitsConsumed >= 600 && unitsConsumed < 800) 
	{
        totalAmount = unitsConsumed * 1.80;
    } 
	else 
	{
        totalAmount = unitsConsumed * 2.00;
    }

   
    if (totalAmount > 800) 
	{
        totalAmount += totalAmount * 0.18;  // Add 18% surcharge
    }

    
    if (totalAmount < 256) 
	{
        totalAmount = 256;
    }

  
    printf("\nElectricity Bill\n");
    printf("Customer ID    : %d\n", customerID);
    printf("Customer Name  : %s\n", customerName);
    printf("Units Consumed : %d\n", unitsConsumed);
    printf("Total Amount   : %.2f\n", totalAmount);

    return 0;
}

