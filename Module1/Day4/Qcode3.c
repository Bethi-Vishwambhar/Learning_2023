#include <stdio.h>

void reverseArray(int array[], int length) {
  int mid = length / 2;
  for (int i = 0, j = length - 1; i < mid; i++, j--) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
  }
}

int main() {
  int length;
  printf("Enter the length of the array: ");
  scanf("%d", &length);

  int array[length];

  printf("Enter the elements of the array: \n");
  for (int i = 0; i < length; i++) {
    scanf("%d", &array[i]);
  }

  printf("Original array: ");
  for (int i = 0; i < length; i++) {
    printf("%d ", array[i]);
  }

  reverseArray(array, length);

  printf("\nReversed array: ");
  for (int i = 0; i < length; i++) {
    printf("%d ", array[i]);
  }

  return 0;
}
