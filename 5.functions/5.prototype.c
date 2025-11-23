#include <stdio.h>

int main() {
    void fun(); //function prototype used for keeping any function orderless
    fun();
    return 0;
}
void fun() {
    printf("Hello");
    return;
}