//4. WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) using conditional statement
#include <stdio.h>

int main() 
{
    int num1, num2, result;
    char operator;


    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    
    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &operator);


    if (operator == '+') 
	{
        result = num1 + num2;
        printf("The result of %d + %d is: %d\n", num1, num2, result);
    } else if (operator == '-')
	 {
        result = num1 - num2;
        printf("The result of %d - %d is: %d\n", num1, num2, result);
    } else if (operator == '*') 
	{
        result = num1 * num2;
        printf("The result of %d * %d is: %d\n", num1, num2, result);
    } else if (operator == '/') 
	{
        if (num2 != 0) 
		{
            result = num1 / num2;
            printf("The result of %d / %d is: %d\n", num1, num2, result);
        } else 
		{
            printf("Error: Division by zero is not allowed.\n");
        }
    } else if (operator == '%') 
	{
        if (num2 != 0) 
		{
            result = num1 % num2;
            printf("The result of %d %% %d is: %d\n", num1, num2, result);
        } else
		 {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else 
	{
        printf("Error: Invalid operator.\n");
    }

    return 0;
}

