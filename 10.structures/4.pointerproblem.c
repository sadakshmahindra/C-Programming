#include <stdio.h>
typedef int * pointer;
int main() {
    int a = 5, b = 8; 
    pointer x = &a, y = &b;
    printf("%p\n%p", x, y);
    return 0;
}