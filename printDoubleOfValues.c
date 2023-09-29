#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nArray with Doubled Values: ");
    for (int i = 0; i < n; i++) {
        int doubledValue = arr[i] * 2;
        printf("%d ", doubledValue);
    }

    return 0;
}
