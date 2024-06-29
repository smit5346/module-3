#include<stdio.h>
void main()
{
	int i,sum=0,avg,sal;
	char c[10];
	for(i=0; i<5; i++)
	{
		printf("Enter the name = ");
		scanf("%s",&c);
		printf("Enter the salary = ");
		scanf("%d",&sal);
		
		sum+=sal;
		
	}
	avg=sum/i;
	printf("Total Salary is %d",sum);
	printf("Total Salary is %d",avg);
}
