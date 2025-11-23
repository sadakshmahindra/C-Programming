#include <stdio.h>
#include <string.h>

// typedef struct car {
//     char name[10];
//     int plate_no;
//     int year_of_manufacture;
// }Car;

// void carstats(Car *carPtr) {
//     strcpy(carPtr->name, "Toyota");
//     carPtr->plate_no = 2917;
//     carPtr->year_of_manufacture = 2017;
// }

// int main() {
//     Car mycar;

//     carstats(&mycar);

    //     printf("Name: %s\n", mycar.name);
    //     printf("Plate No.: %d\n", mycar.plate_no);
    //     printf("Year of Manufacturing: %d\n", mycar.year_of_manufacture);
    //     return 0;
    // }

typedef struct employeeinfo {
    int employee_id;
    char name[50];
    float salary;
}employee_info;

int main() {
    employee_info employee[3];
    for(int i = 0; i < 3; i++) {
        printf("Please Enter the name of the employee:");
        scanf("%s", employee[i].name);
        printf("Please enter your id:");
        scanf("%d", &employee[i].employee_id);
        printf("Please enter your salary:");
        scanf("%f", &employee[i].salary);
    }

    for(int i = 0; i < 3; i++) {
        printf("Name: %s\n", employee[i].name);
        printf("ID: %d\n", employee[i].employee_id);
        printf("Salary: %.2f\n", employee[i].salary);
    }
    return 0;
}