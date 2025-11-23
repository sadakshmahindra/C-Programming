#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;
    printf("Please enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Please enter the breadth of the rectangle: ");
    scanf("%f", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    if (area > perimeter) {
        printf("Area of a rectangle is %f which is greater than the perimeter of the rectangle\n", area);
    }if (perimeter > area) {
        printf("The perimeter of rectangle is %f which is greater than the area of the rectangle\n", perimeter);
    }if (area == perimeter) {
        printf("The area of the rectangle and perimeter of the rectangle both are equal\n");
    }
    return 0;
}