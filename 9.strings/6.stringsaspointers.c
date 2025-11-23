#include <stdio.h>
#include <string.h>

int main() {
    // char str[] = "College Wallah";
    // char *ptr = str; // ptr now points to str[0]
    // char *ptr = "College wallah"; // we cant take input in this 
    // // also we this is only a read only template
    // // and cant be used to play with the elements
    // while(*ptr != '\0') {
    //     printf("%c", *ptr);
    //     ptr++; // moves pointer to the next character
    // }
    // in pointer string we can change whole string
    // but in normal initialization we cant change the whole string
    char *ptr = "college wallah";
    ptr = "physics wallah";
    printf("%s", ptr);
    return 0;
}