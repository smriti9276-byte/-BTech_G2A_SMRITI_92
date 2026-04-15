#include <stdio.h>
#include <math.h>

int main() {
    int i, num, remainder, result, n;

    printf("Armstrong numbers from 1 to 100 are:\n");

    for(i = 1; i <= 100; i++) {
        num = i;
        result = 0;
        n = 0;

        // Count number of digits
        int temp = num;
        while(temp != 0) {
            temp /= 10;
            n++;
        }

        temp = num;

        // Calculate sum of digits raised to power n
        while(temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, n);
            temp /= 10;
        }

        // Check Armstrong number
        if(result == num) {
            printf("%d ", num);
        }
    }

    return 0;
}
