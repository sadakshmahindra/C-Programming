#include <stdio.h>
#include <math.h>
#include <limits.h>
// # --> preprocessor directive
int main() {
    printf("hello");
    float f = sqrt(7);
    float x1 = cbrt(8);
    printf("\n%f", f);
    int x = INT_MAX;
    long long z = LLONG_MAX;
    printf("\n%lld", z);
    printf("\n%d", x);
    return 0;
}