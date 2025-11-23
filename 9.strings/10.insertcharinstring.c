#include <stdio.h>
#include <string.h>

int main() {
    char str[20] = "College";
    printf("%s\n", str);
    // 2nd index pe l insert karna or baki ko further push karna hai
    // college --> colllege
    for(int i = 6; i >= 2; i--) {
        str[i + 1] = str[i];

    }
    str[2] = 'k';
    printf("%s", str);
    return 0;
}