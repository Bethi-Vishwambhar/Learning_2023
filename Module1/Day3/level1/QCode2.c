#include <stdio.h>

void printBits(int num) {
    int i;
    for (i = 31; i >= 0; i--) {
        int mask = 1 << i;
        int bit = (num & mask) ? 1 : 0;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Binary representation: ");
    printBits(num);

    return 0;
}
