//20. Accept monthly salary from the user and deduct 10% insurance premium, 
//10% loan installment find out of remaining salary
#include<stdio.h>
void main()
{
	int s,a;
	printf("Enter Salary");
	scanf("%d",&s);
	
	a=s*10/100;
	
	
	a=s-a-a;
	printf("Total Remaining Salary is %d",a);
}
