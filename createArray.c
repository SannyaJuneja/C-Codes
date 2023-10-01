#include <stdio.h>
#include <stdlib.h>
int main() {
    int n; 
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int)); 
    if (a == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]); 
    }
    printf("You entered the following elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    free(a);
    return 0;
}
