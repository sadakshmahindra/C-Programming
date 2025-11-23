#include <stdio.h>

int main() {
    float sp, cp;
    printf("Please enter the selling price of the item: ");
    scanf("%f", &sp);
    printf("Please enter the cost price of the item: ");
    scanf("%f", &cp);
    if(sp > cp){
        float profit = sp - cp;
        printf("You made a profit of $%.2f\n", profit);
    }else if(sp < sp){
        float loss = cp - sp; 
        printf("You have made a loss of $%.2f\n", loss);
    }else{
        printf("You haven't made any profit or loss!");
    }
    return 0;
}