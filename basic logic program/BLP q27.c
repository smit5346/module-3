//27. Convert days into months
#include<stdio.h>
void main()
{
	int day,month;
	printf("Enter Day");
	scanf("%d",&day);
	
	month=day/30;
	printf("Total Month is %d",month);
}
