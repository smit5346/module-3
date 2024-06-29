//35. Accept the input month number and print number of days in that
//month
#include <stdio.h>

int main() 
{
    int month;
    int days;

    
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    
    switch (month) 
	{
        case 1: // January
        case 3: // March
        case 5: // May
        case 7: // July
        case 8: // August
        case 10: // October
        case 12: // December
            days = 31;
            break;
        case 4: // April
        case 6: // June
        case 9: // September
        case 11: // November
            days = 30;
            break;
        case 2: // February
            days = 28; // Assuming it's not a leap year
            break;
        default:
            printf("Invalid month number.\n");
            return 1;
    }

    
    printf("Number of days: %d\n", days);

    return 0;
}

