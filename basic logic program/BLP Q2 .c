//2. Write a program to make Simple calculator (to make addition, subtraction, 
//multiplication, division and modulo)

#include<stdio.h>
void main()
{
	int no1,no2,no3;
	printf("Enter Two Numbetr");
	scanf("%d %d",&no1,&no2);
	
	no3=no1+no2;
	printf("Total add is %d",no3);
	no3=no1-no2;
	printf("\n Total sub is %d",no3);
	no3=no1*no2;
	printf("\nTotal mul is %d",no3);
	no3=no1/no2;
	printf("\nTotal div is %d",no3);
	no3=no1%no2;
	printf("\nTotal modu is %d",no3);
}
