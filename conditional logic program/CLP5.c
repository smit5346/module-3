//5. Check Number Is Positive or Negative
#include <stdio.h>

int main() 
{
    int num;

    // Ask the user to input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    
    if (num > 0) 
	{
        printf("The number %d is positive.\n", num);
    } else if (num < 0) 
	{
        printf("The number %d is negative.\n", num);
    } else 
	{
        printf("The number is zero.\n");
    }

    return 0;
}

