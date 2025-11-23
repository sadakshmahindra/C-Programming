#include <stdio.h>

int main() {
    int a = 5;
    int *p = &a;
// VVIP -->> *p = 7; // a is changed
    printf("%p\n", p); //stored balue ka address milega
    printf("%p\n", &p); //pointer ka address print hojayega
    printf("%d\n", *p); //a ki value mil jayegi
    return 0;
}