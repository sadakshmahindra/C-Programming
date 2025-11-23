#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i <n; i++) {
        printf("Enter the value of element no %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int comp;
    printf("Enter the value that needs to be compared: ");
    scanf("%d", &comp);

    int count = 0;
    for(int i = 0; i < n; i++) {
        if(comp > arr[i]) {
            count++;
        }
    }

    printf("The number of elements greater than %d are %d", comp, count);
    return 0;
}