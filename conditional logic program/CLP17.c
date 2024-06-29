//17. Write a C program to check whether a triangle can be formed with the given values for the angles.
#include<stdio.h>
int main()
 {
    int angle1, angle2, angle3;

    
    printf("Enter the three angles of the triangle:\n");
    printf("Angle 1: ");
    scanf("%d", &angle1);
    printf("Angle 2: ");
    scanf("%d", &angle2);
    printf("Angle 3: ");
    scanf("%d", &angle3);

   
    if (angle1+angle2+angle3==180) 
	{
        printf("The given angles form a triangle.\n");
    } else {
        printf("The given angles do not form a triangle.\n");
    }

    return 0;
}
