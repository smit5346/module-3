//28. Convert years into days and months
#include<stdio.h>
void main()
{
	int y,d,m;
	printf("Enter Year");
	scanf("%d",&y);
	
	d=y*360;
	m=y*12;
	printf("Total Day is %d \n Total Month is %d",d,m);
	
	
}
