//8. WAP to accept the height of a person in centimeters and categorize the 
//person according to their height.
#include <stdio.h>

int main() 
{
    float height_cm;

    // Ask the user to input height in centimeters
    printf("Enter your height in centimeters: ");
    scanf("%f", &height_cm);

    
    if (height_cm < 0) 
	{
        printf("Invalid height input.\n");
    } else if (height_cm < 150) 
	{
        printf("You are Short.\n");
    } else if (height_cm >= 150 && height_cm < 180)
	{
        printf("You are Average height.\n");
    } else {
        printf("You are Tall.\n");
    }

    return 0;
}

