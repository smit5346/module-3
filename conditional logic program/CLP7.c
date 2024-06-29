//7. Accept marks from user and check pass or fail
#include <stdio.h>

int main() 
{
    int marks;
    int passing_marks = 40; // Assuming 40 is the passing mark

   
    printf("Enter your marks: ");
    scanf("%d", &marks);

    
    if (marks >= passing_marks) 
	{
        printf("You have passed.\n");
    } else {
        printf("You have failed.\n");
    }

    return 0;
}

