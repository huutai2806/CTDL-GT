#include <iostream>

int demSoDuong(float arr[], int n, int i, int count) {
    if (i == n) {
        return count;
    }
    if (arr[i] > 0) {
        count++;
    }
    return demSoDuong(arr, n, i + 1, count);
}
int main() {
    float arr[] = {1.2, -2.1, 3.4, -4.5, 5.6};
    int n = sizeof(arr) / sizeof(float);
    int count = demSoDuong(arr, n, 0, 0);
    cout << "So luong gia tri duong trong mang la: " << count << endl;
    return 0;
}
