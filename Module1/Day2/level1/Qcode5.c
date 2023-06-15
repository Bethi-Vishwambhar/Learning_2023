#include <stdio.h>

int countSetBits(int num) {
    int count = 0;

    while (num != 0) {
        if (num & 1)
            count++;
        num >>= 1;
    }

    return count;
}

int main() {
    int arr[100];
    int length;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &length);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < length; i++) {
        printf("Element %d: ", i);
        scanf("%x", &arr[i]);
    }

    int totalBits = 0;
    for (int i = 0; i < length; i++) {
        totalBits += countSetBits(arr[i]);
    }

    printf("Total number of set bits: %d\n", totalBits);

    return 0;
}
