#include <stdio.h>
void greet() {
   printf("Good Morning\n");
   printf("How are you?\n");
   return;
}

int main() {
    greet(); //calling a function
    greet();
    greet();
    return 0;
}