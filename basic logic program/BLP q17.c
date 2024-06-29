//17. Calculate person’s insurance premium based on salary
#include<stdio.h>
void main()
{
	int s,p=10,b;
	printf("Enter Total Salary");
	scanf("%d",&s);
	
	b=s*p/100;
	printf("Total Premium is %d",b);
	
	s=s-b;
	printf("\n Total salary is %d ",s);
}
