#include <stdio.h>

int main() {
    int arr[5] = {2, 4, 6, 8, 1};
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]);
    printf("%d\n", arr[4]);
    arr[4] = 100; // we can change values of indices even in between 
    printf("%d\n", arr[4]);
    
    float frr[3] = {1.2, 5.6, 7.8};
    printf("%f\n", frr[1]);
    
    char crr[4] = {'a', 'b', 'c'};
    printf("%c\n", crr[3]); // PARATIALLY DECLARED ARRAY SO NO VALUE COMES OR NULL SPACE
    // IMPORTANT: Accessing an array out of its bounds (e.g., index > n-1) is UNDEFINED BEHAVIOR in C.
    // This means the result is unpredictable. It might seem to print a "garbage" value,
    // but it could also crash the program or corrupt other parts of memory.
    // This is a serious bug and should always be avoided. The line below is for demonstration only.
    // printf("%d\n", arr[100]); // if indices > n - 1 then there will be garbage value
    return 0;
    // similaritly we can also make array for float and character to 
}