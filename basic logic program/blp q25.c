#include <stdio.h>

int main()
 {
 	int i;
    float expenses[5];
    float total = 0, average;

  
    for ( i = 0; i < 5; i++) 
	{
        printf("Enter expense %d: ", i + 1);
        scanf("%f", &expenses[i]);
        total+= expenses[i];
    }

    
    average = total / 5;

 
    printf("Total Expenses: %.2f\n", total);
    printf("Average Expense: %.2f\n", average);

    return 0;
}

