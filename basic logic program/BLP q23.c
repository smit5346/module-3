//23. WAP to calculate swap 2 numbers with using of multiplication and division.
#include<stdio.h>
void main()
{
	int no1,no2;
	printf("enter total number ");
	scanf("%d %d",&no1,&no2);
	printf("\n before value no1 is %d no2 is %d",no1,no2);
	no1=no1*no2;
	no2=no1/no2;
	no1=no1/no2;
	printf("\n after value no1 is %d no2 is %d ",no1,no2);
}
