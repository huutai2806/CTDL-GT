#include <iostream>

bool checkAllNegative(float arr[], int n) {
    if (n == 0) {
        return false;
    }
    if (arr[0] >= 0) {
        return false;
    }
    if (n == 1) { 
        return true;
    }
    return checkAllNegative(arr + 1, n - 1);
}

bool checkAllNegative(float arr[], int n);

int main() {
    int n = 5;
    float arr[n] = {-1.5, -2.0, -3.7, -4.2, -5.8};
    if (checkAllNegative(arr, n)) {
        cout << "Mang toan so am" << endl;
    } else {
        cout << "Mang khong toan so am" << endl;
    }
    
    return 0;
}
