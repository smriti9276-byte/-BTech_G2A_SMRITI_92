#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float SI, CI, amount;

    // Input from user
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Simple Interest calculation
    SI = (principal * rate * time) / 100;

    // Compound Interest calculation
    amount = principal * pow((1 + rate / 100), time);
    CI = amount - principal;

    // Output results
    printf("\nSimple Interest = %.2f", SI);
    printf("\nCompound Interest = %.2f", CI);

    return 0;
}
