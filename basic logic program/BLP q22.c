////22. Calculate compound interest(Compound Interest formula:
//a. Formula to calculate compound interest annually is given by:
//Amount= P(1 + R/100)t
//b. Compound Interest = Amount – P
#include <stdio.h>
#include <math.h> // for pow() function

int main()
 {
    float principal, rate, time, amount, compoundInterest;


    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);


    rate = rate / 100;


    amount = principal * pow(1 + rate, time);

   
    compoundInterest = amount - principal;

    
    printf("Amount after %0.2f years: %.2f\n", time, amount);
    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;
}

