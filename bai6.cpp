#include <iostream>

void quicksort(int arr[], int left, int right) {
    int i = left, j = right;
    int tmp;
    int pivot = arr[(left + right) / 2];

    while (i <= j) {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    };

    if (left < j) quicksort(arr, left, j);
    if (i < right) quicksort(arr, i, right);
}

int main() {
    int arr[] = {41, 23, 4, 14, 56, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Mang truoc khi sap xep: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
	}
    quicksort(arr, 0, n-1);
    cout << "\nMang sau khi sap xep: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
	}
    return 0;
}
