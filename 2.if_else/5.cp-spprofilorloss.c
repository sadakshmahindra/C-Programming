#include <stdio.h>

int main() {
    float SP, CP;
    printf("Please enter the selling price of the item: ");
    scanf("%f", &SP);
    printf("Please enter the cost price of the item: ");
    scanf("%f", &CP);
    if(SP > CP) {
        float profit = SP - CP;
        printf("You made a profit of $%.2f\n", profit);
    }if (SP < CP) {
        float loss = CP - SP; 
        printf("You have made a loss of $%.2f\n", loss);
    } if (CP == SP) {
        printf("You haven't made any profit or loss!");
    }
    return 0;
}