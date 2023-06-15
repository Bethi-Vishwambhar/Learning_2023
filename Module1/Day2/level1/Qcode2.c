#include <stdio.h>

void swap(int *num1, int *num2) {
    int *temp = *num1;
    *num1 = *num2;
    *num2 = temp;
   
}

int main() {
    int number1 , number2 ;
    printf("Enter the numbers to be swapped\n");
    printf("enter 1st number :\t");
    scanf("%d",&number1);
    printf("enter 2nd number :\t");
    scanf("%d",&number2);
    printf("Before swap: number1 = %d, number2 = %d\n", number1, number2);
    swap(&number1, &number2);
    printf("After swap: number1 = %d, number2 = %d\n", number1, number2);
    return 0;
}
