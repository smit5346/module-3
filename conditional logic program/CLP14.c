//14. WAP to find the largest of three numbers
#include <stdio.h>

int main() 
{
    int num1, num2, num3;
    int largest;

    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

   
   
    largest = num1;

    
    
    if (num2 > largest) 
	{
        largest = num2;
    }
    if (num3 > largest) 
	{
        largest = num3;
    }

   
    printf("The largest number among %d, %d, and %d is: %d\n", num1, num2, num3, largest);

    return 0;
}

