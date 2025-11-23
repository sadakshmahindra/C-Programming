#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[7] = {12, 21, 30, 42, 55, 6, 7};
    int x = 42;
    int index = 0;
    bool flag = false;
    for(int i = 0; i < 7; i++) {
        if(arr[i] == x) {
            flag = true;\
            index = i;
            break;
        }
    }
    if(flag) {
        printf("The given number %d is in the array with index number %d.", x, index);
    }else{
        printf("not in the array.");
    }
}