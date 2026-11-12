#include <stdio.h>
#include <math.h> // Required for pow() function

int main() {
    float principal, rate, time;
    float simple_interest, compound_interest, amount;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);
 
    printf("Enter Rate of interest (%%): ");
    scanf("%f", &rate);

    printf("Enter Time period (in years): ");
    scanf("%f", &time);

    // Calculating Simple Interest
    simple_interest = (principal * rate * time) / 100.0;

    // Calculating Compound Interest
    amount = principal * pow((1 + rate / 100.0), time);
    compound_interest = amount - principal;

    printf("\n--- Results ---\n");
    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);
    printf("Total Amount (with Compound Interest): %.2f\n", amount);

    return 0;
}