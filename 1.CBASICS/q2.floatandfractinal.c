#include <stdio.h>

int main() {
    float x; 
    printf("Enter a decimal value (e.g., 5.7): ");
    scanf("%f", &x);

    int integer_part = x; 
    float fractional_part = x - integer_part;

    printf("The integer part is: %d\n", integer_part);
    printf("The fractional part is: %f\n", fractional_part);
    
    return 0;
}
