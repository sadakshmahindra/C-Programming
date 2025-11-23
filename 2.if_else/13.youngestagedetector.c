#include <stdio.h>

int main () {
    int ra, sa, aa;
    printf("Enter Ram's age: ");
    scanf("%d", &ra);
    printf("Enter Shyam's age: ");
    scanf("%d", &sa);
    printf("Enter Ajay's age: ");
    scanf("%d", &aa);
    if (ra < sa & ra < aa) {
        printf("Ram is the youngest.");
    }if (sa < ra & sa < aa) {
        printf("Shyam is the youngest.");
    }if (aa < sa & aa < ra) {
        printf("Ajay is the youngest.");
    }
    return 0;
}