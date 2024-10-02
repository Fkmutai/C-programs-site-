#include <stdio.h>
#include <math.h>

int main() {

    // Initialise Variables 
    double principalAmount, rate, time, compoundInterest, simpleInterest;
    int compoundingFrequency; //No. of compounding per year

    // Get values
    printf("Enter the principal amount: ");
    scanf("%lf", &principalAmount);

    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    printf("Enter the interest rate (percentage): ");
    scanf("%lf", &rate);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &compoundingFrequency);

    //Now Calculate The Simple Interest
    simpleInterest = (principalAmount * time * rate) / 100;
    printf("Simple Interest = %.2lf\n", simpleInterest);

    //Now Calculate The Compound Interest - pow() function to calculate the power of a number
    compoundInterest = principalAmount * pow((1 + rate / (compoundingFrequency * 100)), compoundingFrequency * time) - principalAmount;
    printf("Compound Interest = %.2lf\n", compoundInterest);

    return 0;
}
    