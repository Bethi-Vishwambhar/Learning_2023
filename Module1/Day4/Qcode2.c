#include <stdio.h>

int minimum(int array[], int length) {
  int min = array[0];
  for (int i = 1; i < length; i++) {
    if (array[i] < min) {
      min = array[i];
    }
  }
  return min;
}

int maximum(int array[], int length) {
  int max = array[0];
  for (int i = 1; i < length; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }
  return max;
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

  int min = minimum(array, length);
  int max = maximum(array, length);

  printf("Minimum element in array is: %d\n", min);
  printf("Maximum element in array is: %d\n", max);

  return 0;
}
