#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], sum[n];

    // Input first array
    printf("Enter elements of first array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second array
    printf("Enter elements of second array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Sum of arrays
    for(i = 0; i < n; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    // Display result
    printf("Sum of corresponding elements:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}
