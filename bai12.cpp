#include <iostream>

void printArray(int arr[], int n) {
    if (n == 0) {
        return;
    }
    printArray(arr, n - 1);
    cout << arr[n - 1] << " ";
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    printArray(arr, n);
    
    return 0;
}
