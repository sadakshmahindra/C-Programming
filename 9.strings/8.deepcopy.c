#include <stdio.h>

int main() {
    char *s1[] = "Physics Wallah";
    char *s2;
    s2 = s1;
    s2 = "College Wallah";
    printf("%s\n", s1);
    printf("%s", s2);
    return 0;
}