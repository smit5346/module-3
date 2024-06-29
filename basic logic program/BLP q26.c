//26. Convert temperature Fahrenheit to Celsius
#include<stdio.h>
void main()
{
	float fahrenheit,celsius;
	printf("Enter Fahrenheit");
	scanf("%f",&fahrenheit);
	
	celsius=(fahrenheit-32)*5/9;
	printf("Total celsius is :%0.2f",celsius);
}
