#include <stdio.h>

int evenSum(int array[], int length) {
  int sum = 0;
  for (int i = 0; i < length; i++) {
    if (i % 2 == 0) {
      sum += array[i];
    }
  }
  return sum;
}

int oddSum(int array[], int length) {
  int sum = 0;
  for (int i = 0; i < length; i++) {
    if (i % 2 != 0) {
      sum += array[i];
    }
  }
  return sum;
}

int difference(int array[], int length) {
  int es = evenSum(array, length);
  int os = oddSum(array, length);

  printf("\nThe even elements sum is: %d", es);
  printf("\nThe odd elements sum is: %d", os);

  int difference = 0;
  if (es >= os) {
    difference = es - os;
  } else {
    difference = os - es;
  }
  return difference;
}

int main() {
  int length;
  printf("Enter the length of the array: ");
  scanf("%d", &length);

  int *array = (int *)malloc(sizeof(int) * length);
  for (int i = 0; i < length; i++) {
    printf("Enter the element at index %d: ", i);
    scanf("%d", &array[i]);
  }

  int result = difference(array, length);

  printf("\nThe difference between even and odd is: %d", result);

  free(array);

  return 0;
}
