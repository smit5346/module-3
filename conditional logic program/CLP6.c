//6. Find the Character Is Vowel or Not
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
