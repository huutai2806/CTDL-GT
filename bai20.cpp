#include <iostream>

void insertSortRecursive(double arr[], int n)
{
    if (n <= 1)
        return;s
    insertSortRecursive(arr, n - 1);
    double last = arr[n - 1];
    int j = n - 2;
    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}

int main()
{
    double arr[] = { 10.1, 9.2, 7.3, 8.4, 6.5, 5.6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    insertSortRecursive(arr, n);
    for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
    cout << endl;
    return 0;
}
