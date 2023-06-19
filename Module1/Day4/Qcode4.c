#include <stdio.h>

int evenSum(int array[], int length) {
  int sum = 0;
  for (int i = 0; i < length; i++) {
    if (array[i] % 2 == 0) {
      sum += array[i];
    }
  }
  return sum;
}

int oddSum(int array[], int length) {
  int sum = 0;
  for (int i = 0; i < length; i++) {
    if (array[i] % 2 != 0) {
      sum += array[i];
    }
  }
  return sum;
}

int main() {
  int length;
  printf("Enter the length of the array: ");
  scanf("%d", &length);

  int array[length];
  for (int i = 0; i < length; i++) {
    printf("Enter the element at index %d: ", i);
    scanf("%d", &array[i]);
  }

  int es = evenSum(array, length);
  int os = oddSum(array, length);

  printf("\nThe even indexes sum is: %d", es);
  printf("\nThe odd indexes sum is: %d", os);
  int difference = 0;
  if (es >= os) {
    difference = es - os;
  } else {
    difference = os - es;
  }

  printf("\nThe difference between even and odd is: %d", difference);

  return 0;
}
