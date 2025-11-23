#include <stdio.h>
void fun(int x[]) {
    x[0] = 10;
}
int main() {
    int arr[5] = {1,2,3,4,5};
    printf("%d\n", arr[0]); // x = 1
    fun(arr);
    printf("%d", arr[0]); // x = 10 arrays pass by reference
    return 0;
}