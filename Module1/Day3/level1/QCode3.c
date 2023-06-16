#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;
    int temp = num;
    
    for (int i = 0; i < 4; i++) {
        int divisor = 1;
        
        for (int j = 0; j < i; j++) {
            divisor *= 10;
        }
        
        int newNum = (temp / (divisor * 10)) * divisor + (temp % divisor);
        
        if (newNum > largest) {
            largest = newNum;
        }
    }
    
    return largest;
}

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    
    int largestNum = findLargestNumber(num);
    printf("Largest number by deleting a single digit: %d\n", largestNum);
    
    return 0;
}
