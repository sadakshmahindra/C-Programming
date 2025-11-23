#include <stdio.h>

int main() {
    int n; 
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the element no %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int palindrome = 1;
    for(int i = 0; i < n; i++) {
            if(arr[i] != arr[(n - 1) - i]) {
                palindrome = 0;
                break;
        }
    }
    if(palindrome) {
        printf("The array is a palindrome.\n");
    }else{
        printf("The array is not a palindrome.\n");
    }
    return 0;
}