#include <iostream>

float maxInArray(float arr[], int n)
{
    if (n == 1)
        return arr[0];
    float max_in_subarray = maxInArray(arr, n-1);
    if (max_in_subarray > arr[n-1])
        return max_in_subarray;
    else
        return arr[n-1];
}
int main()
{
    float arr[] = {2.3, -4.5, 6.7, 8.9, -10.11, 12.13};
    int n = sizeof(arr) / sizeof(arr[0]);
    float max_value = maxInArray(arr, n);
    cout << "Gia tri lon nhat trong mang la: " << max_value << endl;
    return 0;
}
