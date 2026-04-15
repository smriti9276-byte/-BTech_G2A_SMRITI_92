#include <stdio.h>

int main() {
    float marks[5], sum = 0, percentage;
    int i;

    // Input marks
    printf("Enter marks of 5 subjects:\n");
    for(i = 0; i < 5; i++) {
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    // Calculate percentage
    percentage = sum / 5;

    // Output results
    printf("Sum = %.2f\n", sum);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}a
