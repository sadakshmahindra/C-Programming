#include <stdio.h>
#include <string.h>

int main() {
    char str[40];
    puts("Enter a string: ");

    // Use fgets for safe input
    fgets(str, 40, stdin);

    // Remove the newline character that fgets adds
    str[strcspn(str, "\n")] = 0;

    // Use strlen() from <string.h> to get the correct size
    int size = strlen(str);

    // The core reversal logic
    for(int i = 0, j = size - 1; i <= j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    puts("The reverse string is: ");
    puts(str);

    return 0;
}
