//19.Calculate compound interest
#include <stdio.h>
#include <math.h> // for pow() function

int main() {
    float principal, rate, time, compoundInterest;
    int n;

    
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate (in decimal): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    printf("Enter number of times interest applied per time period: ");
    scanf("%d", &n);


    compoundInterest = principal * pow(1 + (rate / n), n * time) - principal;


    printf("Compound Interest = %.2f\n", compoundInterest);

   
    printf("Total amount after interest = %.2f\n", principal + compoundInterest);

    return 0;
}

