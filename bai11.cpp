#include <iostream>

int countPositive(float arr[], int n) {
    if (n == 0) { 
        return 0; 
    }
    if (arr[0] > 0) {
        return 1 + countPositive(arr + 1, n - 1); 
    } else { 
        return countPositive(arr + 1, n - 1);
    }
}
int main() {
    float arr[] = {1.5, -2.3, 4.7, -5.1, 0.9, 3.2, -6.4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = countPositive(arr, n);
    cout << "So luong gia tri duong trong mang: " << count << endl; 
    return 0;
}
