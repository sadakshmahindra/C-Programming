#include <stdio.h>
#include <string.h>

// Define the structure for a student
typedef struct student {
    int roll_no;
    char name[20];
    char dept[20];
    char course[30];
    int year_of_joining;
} student;

// Function to read details for a single student
void read_student_details(student *s) {
    printf("Enter Roll No: ");
    scanf("%d", &s->roll_no);
    printf("Enter Name: ");
    scanf("%19s", s->name); // Read string, %19s to prevent buffer overflow
    printf("Enter Department: ");
    scanf("%19s", s->dept);
    printf("Enter Course: ");
    scanf("%29s", s->course);
    printf("Enter Year of Joining: ");
    scanf("%d", &s->year_of_joining);
}

int main() {
    student s1, s2;

    // Get details for the first student
    printf("--- Enter details for Student 1 ---\n");
    read_student_details(&s1);
    printf("\n");

    // Get details for the second student
    printf("--- Enter details for Student 2 ---\n");
    read_student_details(&s2);
    printf("\n");

    // Compare the departments using strcmp
    // strcmp returns 0 if the strings are identical
    if (strcmp(s1.dept, s2.dept) == 0) {
        printf("Result: Both students are in the same department (%s).\n", s1.dept);
    } else {
        printf("Result: Students are in different departments (%s and %s).\n", s1.dept, s2.dept);
    }

    return 0;
}
