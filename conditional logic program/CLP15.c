//15. Write a C program to determine eligibility for admission to a professional 
//course based on the following criteria
//Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks 
//in Chem>=50 and Total in all three subject >=190 or Total in Maths and 
//Physics >=140 --------------------------------------Input the marks obtained in
//Physics :65 Input the marks obtained in Chemistry :51 Input the marks 
//obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 
//188 Total marks of Maths and Physics : 137 The candidate is not eligible.
#include <stdio.h>

int main() 
{
    int physics, chemistry, mathematics;
    int total_marks, total_maths_physics;

   
    printf("Input the marks obtained in Physics : ");
    scanf("%d", &physics);
    printf("Input the marks obtained in Chemistry : ");
    scanf("%d", &chemistry);
    printf("Input the marks obtained in Mathematics : ");
    scanf("%d", &mathematics);
	
	total_marks=mathematics+physics+chemistry;
	total_maths_physics=total_marks-chemistry;
	
//    
//    printf("Total marks of Maths, Physics and Chemistry : ");
//    scanf("%d", &total_marks);
//

//    printf("Total marks of Maths and Physics : ");
//    scanf("%d", &total_maths_physics);
    

    
    if ((physics >= 65) && (chemistry >= 55) && (mathematics >= 50) && (total_marks >= 190) ||
        (total_maths_physics >= 140))
	{
        printf("The candidate is eligible.\n");
    } 
	else 
	{
        printf("The candidate is not eligible.\n");
    }

    return 0;
}

