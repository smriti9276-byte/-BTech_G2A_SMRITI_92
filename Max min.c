#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume first element as min and max
    int min = arr[0];
    int max = arr[0];

    // Find min and max
    for(i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    // Output result
    printf("Minimum element = %d\n", min);
    printf("Maximum element = %d\n", max);

    return 0;
}
