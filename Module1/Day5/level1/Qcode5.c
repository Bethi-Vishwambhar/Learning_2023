#include <stdio.h>

struct Point {
    int x;
    int y;
};

void swapPoints(struct Point *point1, struct Point *point2) {
    int tempX = point1->x;
    int tempY = point1->y;

    point1->x = point2->x;
    point1->y = point2->y;

    point2->x = tempX;
    point2->y = tempY;
}

int main() {
    struct Point point1, point2;

    printf("Enter the coordinates of point 1 (x y): ");
    scanf("%d %d", &point1.x, &point1.y);

    printf("Enter the coordinates of point 2 (x y): ");
    scanf("%d %d", &point2.x, &point2.y);

    swapPoints(&point1, &point2);

    printf("\nAfter swapping:\n");
    printf("Point 1: x = %d, y = %d\n", point1.x, point1.y);
    printf("Point 2: x = %d, y = %d\n", point2.x, point2.y);

    return 0;
}
