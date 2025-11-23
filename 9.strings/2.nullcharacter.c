#include <stdio.h>

int main() {
    // char ch = '\0'; // null character
    // printf("%d", ch);
    // int x = 0;
    // char a = (char)x;
    // printf("%c", a);
    char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    int i = 0;
    while (str[i] != '\0') {    
        printf("%c", str[i]);
    }
    return 0;
}