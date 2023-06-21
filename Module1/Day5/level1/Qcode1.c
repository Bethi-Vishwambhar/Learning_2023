#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

float calculateVolume(const struct Box *boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}

float calculateSurfaceArea(const struct Box *boxPtr) {
    float topBottom = 2 * (boxPtr->length * boxPtr->width);
    float frontBack = 2 * (boxPtr->length * boxPtr->height);
    float leftRight = 2 * (boxPtr->width * boxPtr->height);
    return topBottom + frontBack + leftRight;
}

int main() {
   
    struct Box myBox;

    printf("Enter the length of the box: ");
    if (scanf("%f", &myBox.length) != 1) {
        printf("Invalid input. Please enter a valid floating-point number.\n");
        return 1;
    }

    printf("Enter the width of the box: ");
    if (scanf("%f", &myBox.width) != 1) {
        printf("Invalid input. Please enter a valid floating-point number.\n");
        return 1;
    }

    printf("Enter the height of the box: ");
    if (scanf("%f", &myBox.height) != 1) {
        printf("Invalid input. Please enter a valid floating-point number.\n");
        return 1;
    }

    float volume = calculateVolume(&myBox);
    float surfaceArea = calculateSurfaceArea(&myBox);

    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}
