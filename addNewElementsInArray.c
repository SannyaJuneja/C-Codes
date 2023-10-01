#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n; 
    printf("Enter the number of elements in the original array: ");
    scanf("%d", &n);

    int *originalArray = (int *)malloc(n * sizeof(int)); 
    if (originalArray == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1; // Exit the program with an error code
    }

    printf("Enter %d elements for the original array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &originalArray[i]); 
    }

    int m; 
    printf("Enter the number of new elements to add: ");
    scanf("%d", &m);

    int newSize = n + m;
    int *newArray = (int *)malloc(newSize * sizeof(int));
    if (newArray == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        free(originalArray); // Free the previously allocated memory
        return 1; // Exit the program with an error code
    }

    for (int i = 0; i < n; i++) {
        newArray[i] = originalArray[i];
    }

    printf("Enter %d new elements:\n", m);
    for (int i = n; i < newSize; i++) {
        scanf("%d", &newArray[i]); 
    }

    printf("New array with added elements:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", newArray[i]);
    }

    free(originalArray);
    free(newArray);

    return 0;
}
