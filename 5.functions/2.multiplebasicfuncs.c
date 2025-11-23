#include <stdio.h>
void england() {
    printf("You are in england.\n");
    return;
}
void australia() {
    printf("You are in australia.\n");
    england();
    return;
}
void india() {
    printf("You are in india.\n");
    australia(); // whicchever function is being called should be placed above the calling function
    return;
}
int main() {
    india();
    return 0;
}