//32. Write a C program to input basic salary of an employee and calculateits 
//Gross salary according to following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80% 
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%\
#include <stdio.h>

int main() 
{
    float basicSalary, HRA, DA, grossSalary;

    
    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basicSalary);

    
    if (basicSalary <= 10000) 
	{
        HRA = basicSalary * 0.20;  // HRA = 20% of basic salary
        DA = basicSalary * 0.80;   // DA = 80% of basic salary
    } 
	else if (basicSalary <= 20000) 
	{
        HRA = basicSalary * 0.25;  // HRA = 25% of basic salary
        DA = basicSalary * 0.90;   // DA = 90% of basic salary
    } 
	else 
	
	{
        HRA = basicSalary * 0.30;  // HRA = 30% of basic salary
        DA = basicSalary * 0.95;   // DA = 95% of basic salary
    }

    
    grossSalary = basicSalary + HRA + DA;

   
    printf("Gross Salary of the employee: %.2f\n", grossSalary);

    return 0;
}

