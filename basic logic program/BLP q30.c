//30. WAP to convert years into days and days into years
#include<stdio.h>
void main()
{
	float y,d;
	printf("Enter Year");
	scanf("%f",&y);
	
	d=y*360;
	y=d/360;
	printf("Total day is %0.2f \n Total year is %0.2f",d,y);
}
