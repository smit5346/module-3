//21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable 
//and without using 3rd variable
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter Two Number");
	scanf("%d %d",&a,&b);
	
	c=a;
	a=b;
	b=c;
	printf("Number a is%d \n Number b is %d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n Number a is %d \n Number b is %d",a,b);
	
}
