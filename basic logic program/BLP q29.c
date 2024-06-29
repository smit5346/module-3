//29. Convert minutes into seconds and hours
#include<stdio.h>
void main()
{
	float m,s,h;
	printf("Enter Minutes");
	scanf("%f",&m);
	
	s=m*60;
	h=m/60;
	printf("Total Second is %0.2f \n Total Hours Is %0.2f",s,h);
}
