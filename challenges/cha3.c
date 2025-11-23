#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter any english alphabet(A/a to Z/z): ");
    scanf("%c", &ch);
    if(!isalpha(ch)) {
        printf("The entered input isnt an alphabet.\n");
        return 1;
    }
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    }else {
        printf("%c is a constant.", ch);
    }
    return 0;
}