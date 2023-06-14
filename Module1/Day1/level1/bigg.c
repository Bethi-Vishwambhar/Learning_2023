#include <stdio.h>

int bigbyternary(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}

int bigbyifelse(int num1, int num2)
{
    if(num1>num2)
    {
        printf("%d is greater done by if else\n",num1);
    }
    else
    {
         printf("%d is greater done by if else\n",num2);    
    }
    return 0;
}
int main() {
    int number1, number2;
    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);
    
    bigbyifelse(number1, number2);
    
    int result = bigbyternary(number1, number2);
    printf("The biggest number by ternary operator is: %d\n", result);
    
    return 0;
}