#include <stdio.h>

int sum_of_array(int array[], int length) {
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += array[i];
  }
  return sum;
}

float average_of_array(int array[], int length) {
  int sum = sum_of_array(array, length);
  float average = sum / length;
  return average;
}

int main() {
  int length;
  printf("Enter the length of the array: \t");
  scanf("%d", &length);

  int array[length];
  printf("Enter the numbers in the array: \t");
  for (int i = 0; i < length; i++) {
    scanf("%d", &array[i]);
  }

  int sum = sum_of_array(array, length);
  float average = average_of_array(array, length);

  printf("Sum of array is: %d\n", sum);
  printf("Average of array is: %.2f\n", average);

  return 0;
}
