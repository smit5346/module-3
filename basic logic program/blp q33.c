//33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
void main()
{
	int n=4, power;
	power=n*1;
	printf("%d",power);
	power=n*n;
	printf("\n%d",power);
	power=n*n*n;
	printf("\n%d",power);
}
