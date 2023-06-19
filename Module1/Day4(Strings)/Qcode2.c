#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int convertStringToNumber(char *str) {
  int number = 0;
  int temp = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    temp = (int)str[i] - 48;
    number = number * 10;
    number = number + temp;
  }
  return number;
}

int main() {
  int length;
  printf("Enter the length of string :");
  scanf("%d", &length);

  char *str = (char *)malloc(sizeof(char) * length);
  printf("Enter the string :");
  scanf("%s", str);

  printf("\nEntered String :%s", str);

  int number = convertStringToNumber(str);

  int num = atoi(str);

  printf("\nString Converted to number with help of general method :%d", number);
  printf("\nString Converted to number with help of atoi function method :%d", num);

  free(str);

  return 0;
}
