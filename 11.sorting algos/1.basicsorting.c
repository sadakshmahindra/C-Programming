#include <stdio.h>

int main() {
    int arr[11] = {6,1,7,3,2,5,4,8,9,9,10};
    int sum = (10 * 11) / 2;
    int sum_of_array = 0;
    for(int i = 0; i < 11; i++) {
        sum_of_array += arr[i];
    }
    int duplicate = sum_of_array - sum;
    printf("The duplicate element is: %d\n", duplicate);
    return  0;
}