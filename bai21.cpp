#include <iostream>

int T(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * T(n-1);
    }
}
int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "T(" << n << ") = " << T(n) << endl;
    return 0;
}
