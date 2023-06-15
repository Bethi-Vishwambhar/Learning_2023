#include <stdio.h>

void printExponent(double x) {
    long long *ptr = (long long *)&x;
    long long exponent = (*ptr >> 52) & 0x7FF;

    printf("Exponent in hexadecimal: 0x%llx\n", exponent);
    
    printf("Exponent in binary: 0b");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (exponent >> i) & 0x1);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}
