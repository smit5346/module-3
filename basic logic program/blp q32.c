#include<stdio.h>
void main()
{
	int n1,n2,sum;
	printf("Enter number 1 = ");
	scanf("%d",&n1);
	printf("Enter number 2 = ");
	scanf("%d",&n2);
	
	sum=n1+n2;
	printf("%d",sum);
	printf("\n%d",sizeof(sum));
}
