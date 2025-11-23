#include <stdio.h>
#include <math.h>

double basic_arithmetic() {
    double num1, num2, result;
    char op;
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    printf("Enter the operator: ");
    scanf(" %c", &op);

    switch(op) {
        case '+':
        result = num1 + num2;
        break;

        case '-':
        result = num1 - num2;
        break;

        case '*':
        result = num1 * num2;
        break;

        case '/':
        if(num2 != 0) {
        result = num1 / num2;
        }else {
            return -1;
        }
        break;

        default:
        printf("Invalid Operator.\n");
        break;
    }
    return result;
}

double exponent() {
    double base, power, result;
    char expo;

    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the power: ");
    scanf("%lf", &power);
    
    result = pow(base, power);
    return result;
}

long long factorial() {
    int input;
    long long result = 1;
    printf("Please Enter the number here: ");
    scanf("%d", &input);
    if(input < 0) {
        printf("The factorial of negative numbers isnt possible.\n");
        return -1; 
    }else if(input == 0 || input == 1) {
        return 1;
    } else{
        for(int i = input; i > 0; i--)  {
        result = result * i;
    }
    }
    return result;
}

double square_root() {
    double input;
    double result;

    printf("Enter the number: ");
    scanf("%lf", &input);
    if(input < 0) {
        printf("Error: Cannot calculate the square root of a negative number.\n\n");
        return -1;
    }else {
        result = sqrt(input);
    }
    return result;
}
int main() {
    int choice;
    
    do { // do while loop is used due to the garbage value choice stores and this ensures the loop runs once 
    printf("INSTRUCTIONS\n");
    printf("I. Choose any one of the following option.(i.e., 1 or 2 and so on.....\n");
    printf("1.Basic: '+', '-', '*', '/'\n");
    printf("2.Power: '^'\n");
    printf("3.Factorial: '!'\n");
    printf("4.Square Root: '√'\n");
    printf("0.Exit\n");
    printf("Please Enter your choice: ");
    scanf("%d", &choice);

    printf("\n"); // Add a newline for better spacing

    switch(choice) {
        case 1:
        {
            double result = basic_arithmetic();
            if(result != -1) { // Assuming -1 is the error code for division by zero
                printf("Result: %lf\n\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n\n");
            }
        }
        break;

        case 2:
        printf("Result: %lf\n\n", exponent());
        break;

        case 3:
        {
            long long fact_result = factorial();
            if(fact_result != -1) {
                printf("Result: %lld\n\n", fact_result);
            }
        }
        break;

        case 4:
        {
            double sqrt_result = square_root();
            if(sqrt_result != -1) {
                printf("Result: %lf\n\n", sqrt_result);
            }
        }
        break;

        case 0:
        printf("Exiting Calculator. Goodbye! 👋\n");
        break;

        default:
        printf("Error: Invalid choice. Please select an option from 0 to 4.\n");
        printf("\n");
        break;
    }
    } while(choice != 0);
    
    return 0;
}