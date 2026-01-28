#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n;

    // Ask user for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory
    arr = (int *)malloc(n * sizeof(int));

    // Fill the array using a for loop
    for (int i = 0; i < n; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the array in reverse using a for loop
    printf("\nIntegers in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    // Free allocated memory
    free(arr);

    return 0;
}