#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    typedef struct date{ 
        int date;
        int month;
        int year;
    }date;

    date a, b;
    a.date = 5;
    a.month = 12;
    a.year = 1996;

    b.date = 19;
    b.month = 1;
    b.year = 2023;
    
    // bool flag = true;
    // if(a.date != b.date) {
    //     flag = false;
    // }
    // if(a.month != b.month) {
    //     flag = false;
    // }
    // if(a.year != b.year) {
    //     flag = false;
    // }
    // if(flag == true) {
    //     printf("The dates are same.\n");
    // } else {
    //     printf("The dates aren't same.\n");
    // }

    // ============= METHOD - 2 ================

    if(a.date == b.date && a.month == b.month && a.year == b.year) {
        printf("The dates are equal.\n");
    } else {
        printf("The dates arent equal.\n");
    }
    return 0;
}