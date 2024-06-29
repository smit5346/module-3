//37. WAP to show
//i. Monday to Sunday using switch case
//ii. Vowel or Consonant using switch case
#include<stdio.h>
void main()
{
	char c;
	printf("Enter any alphabet  =");
	scanf("%c",&c);
	
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	{
		printf("\n %c is vowel...",c);
	}
	else
	{
		printf("\n %c is consonant...",c);
	}
}
