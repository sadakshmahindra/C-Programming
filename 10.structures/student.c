#include <stdio.h>
#include <string.h>

typedef struct student {
        char name[25];
        int roll_no;
        float marks;
    } Student;

int main() {
    Student s1;
    // printf("Enter the name of the Student:\n");
    // scanf("%s", &Student.name); //for string %s is used and doesn't require you to put you a & symbol though its optional
    strcpy(s1.name, "Sadaksh Singh Mahindra");
    printf("Enter the roll no:\n");
    scanf("%d", &s1.roll_no);
    printf("Enter the marks of the Student:\n");
    scanf("%f", &s1.marks);

    printf("Name: %s\n", s1.name);
    printf("Roll.No: %d\n", s1.roll_no);
    printf("Marks: %f\n", s1.marks);
    return 0;
}