#include <iostream>

double sumPositive(double arr[], int n) {
    if (n == 0) { // Trường hợp cơ sở
        return 0;
    } else {
        double sum = sumPositive(arr, n-1);
        if (arr[n-1] > 0) {
            sum += arr[n-1];
        }
        return sum;
    }
}

int main() {
    double arr[] = {1.2, -2.5, 3.7, 0, -4.8, 5.6};
    int n = sizeof(arr) / sizeof(arr[0]);
    double sum = sumPositive(arr, n);
    cout << "Tong cac gia tri duong trong mang la: " << sum << endl;
    return 0;
}
