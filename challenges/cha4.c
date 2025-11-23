#include <stdio.h>

int main() {
    int marks;
    printf("Enter the marks of the student(between 0 to 100): ");
    scanf("%d", &marks);
    if(marks > 100 || marks < 0) {
        printf("Please enter a valid input.");
        return 1;
    }
    if(marks >= 90 && marks <= 100) {
        printf("Congratulations! You achieved A+ grade.");
    }else if(marks >= 80) {
        printf("Congratulations! You achieved A grade.");
    }else if(marks >= 70) {
        printf("You achieved B grade.\n There is room for improvement.");
    }else if(marks >= 60) {
        printf("You achieved c grade.\n You need to focus on your studies even you can achieve top grade.");
    }else if(marks >= 40) {
        printf("You achieved D grade.\n You need to focus on your studies even you can achieve top grade.");
    }else{
        printf("Better lucknext time!You've failed.\nYou have scored below the minimum passing marks.");
    }

    return 0;
}