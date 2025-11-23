#include <stdio.h>

int main() {
    int year;
    printf("Enter the year(eg: enter the years after A.D.): ");
    scanf("%d", &year);

    if(year % 4 == 0) {
        printf("%d is a leap year.\n", year);
    }else {
        printf("%d is not a leap year.", year);
    }

    return 0;
}