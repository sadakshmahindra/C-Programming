#include <stdio.h>
#include <string.h>

int main() {
    typedef struct cricketer{
        char name[20];
        int age;
        int no_of_matches;
        float avg_runs;
    } cricketer;

    cricketer arr[3];
    for(int i = 0; i < 3; i++) {
        printf("Enter the name of the cricketer: ");
        scanf(" %[^\n]", arr[i].name);
        printf("Enter the age of the cricketer: ");
        scanf("%d", &arr[i].age);
        printf("Enter the no of matches played by the cricketer: ");
        scanf("%d", &arr[i].no_of_matches);
        printf("Enter the avg runs of the cricketer: ");
        scanf("%f", &arr[i].avg_runs);
    }

    for(int i = 0; i < 3; i++) {
        printf("Name: %s\n", arr[i].name);
        printf("Age: %d\n", arr[i].age);
        printf("no of matches: %d\n", arr[i].no_of_matches);
        printf("avg runs: %f\n\n", arr[i].avg_runs);
    }
}