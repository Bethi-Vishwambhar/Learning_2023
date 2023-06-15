#include <stdio.h>

int main() {
    int arr[100];
    int length;

    printf("Enter the number of elements in the array: \t");
    scanf("%d", &length);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < length; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < length; i += 2) {
        sum += arr[i];
    }

    printf("Sum of alternate elements: %d\n", sum);

    return 0;
}
