#include <stdio.h>
#include <string.h>

int main() {
    // char *str = "Raghav";
    // int x = strlen(str);
    // printf("%d", x + 1);
// char s1[12] = "Raghav Garg";
// char s2[12];
// strcpy(s2,s1);
// s2[0] = 'M';
// printf("%s", s2);
    char s1[11] = "Raghav";
    char s2[11] = " garg";
    strcat(s1, s2);
    printf("%s", s1);
    return 0;
}