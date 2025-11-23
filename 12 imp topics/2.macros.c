#include <stdio.h>
#define PI 3.14159265359
#define area(r) (PI * r * r)

float area(float r) {
    return PI * r * r;
}
int main() {
    // double -- > larger than float
    // long double 
    // long double 
//     printf("%.10f", PI);
    
    printf("%f", area(r));
     return 0;
}