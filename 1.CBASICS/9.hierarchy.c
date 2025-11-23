#include <stdio.h>

int main() {
    int i = 2 * 3 / 4 + 4 / 4 + 8 - 2 + 5 / 8;
    printf("print the result : %d\n", i);
    int a = 1, b = 2;
    int c = a/b;
    printf("%f\n", c); //gives GARBAGE VALUE DUE TO WRONG FORMAT SPECIFIER IF WE ADD %d instead of %f then it might come out to be zero
    float e = 1, f = 2;
    float g = e / f;
    printf("%f\n", g); // GIVES THE REAL FLOAT VALUE due to variables are in float and if they were in int story would've been something else
    return 0;
}