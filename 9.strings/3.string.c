#include <stdio.h>

int main() {
    char str[] = "College wallah is best channel for coding.";
    // str[1] = 'b';
    // str[2] = 55;
    int i = 0;
    while(str[i] != '\0') {
        printf("%c", str[i]);
        i++;
    }
    printf("\nThe size of the string is: %d", i);
    return 0;
}