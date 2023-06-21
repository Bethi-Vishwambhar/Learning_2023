#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

void readComplex(struct Complex *complexPtr) {
    printf("Enter the real part: ");
    scanf("%f", &complexPtr->real);

    printf("Enter the imaginary part: ");
    scanf("%f", &complexPtr->imaginary);
}

void writeComplex(const struct Complex *complexPtr) {
    printf("Complex number: %.2f + %.2fi\n", complexPtr->real, complexPtr->imaginary);
}

struct Complex addComplex(const struct Complex *complex1Ptr, const struct Complex *complex2Ptr) {
    struct Complex result;
    result.real = complex1Ptr->real + complex2Ptr->real;
    result.imaginary = complex1Ptr->imaginary + complex2Ptr->imaginary; 
    return result;
}

struct Complex multiplyComplex(const struct Complex *complex1Ptr, const struct Complex *complex2Ptr) {
    struct Complex result;
    result.real = complex1Ptr->real * complex2Ptr->real - complex1Ptr->imaginary * complex2Ptr->imaginary;
    result.imaginary = complex1Ptr->real * complex2Ptr->imaginary + complex1Ptr->imaginary * complex2Ptr->real;
    return result;
}

int main() {

    struct Complex complex1, complex2;

    printf("Enter the first complex number:\n");
    readComplex(&complex1);

    printf("Enter the second complex number:\n");
    readComplex(&complex2);

    printf("First complex number:\n");
    writeComplex(&complex1);

    printf("Second complex number:\n");
    writeComplex(&complex2);

    struct Complex sum = addComplex(&complex1, &complex2);
    printf("Sum of the complex numbers:\n");
    writeComplex(&sum);

    struct Complex product = multiplyComplex(&complex1, &complex2);
    printf("Product of the complex numbers:\n");
    writeComplex(&product);

    return 0;
}
