#include <iostream>

const int MAX = 100;
double tong(double arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    else {
        return arr[n-1] + tong(arr, n-1);
    }
}

int main() {
    int n;
    double arr[MAX];
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i+1 << ": ";
        cin >> arr[i];
    }
    double tongArr = tong(arr, n);
    cout << "Tong cac gia tri trong mang la: " << tongArr;
    return 0;
}
