#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void toggleCase(char *str) {
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] += 32;
    } else if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] -= 32;
    }
  }
}

int main() {
  int length;
  printf("Enter the length of string :");
  scanf("%d", &length);

  char *str = (char *)malloc(sizeof(char) * length);
  printf("Enter the string :");
  scanf("%s", str);

  printf("\nEntered String :%s", str);

  toggleCase(str);

  printf("\nToggled String :%s", str);

  free(str);

  return 0;
}
