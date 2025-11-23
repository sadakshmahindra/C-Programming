#include <stdio.h>

int main() {
    float radius;
    printf("Please enter the radius here: ", radius);
    scanf("%f", &radius);
    float pi = 3.14;
    float area = pi * radius * radius;
    printf("The area of circle is: %f", area);
    return 0;
}