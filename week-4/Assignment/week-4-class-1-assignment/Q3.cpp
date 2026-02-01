#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {
    int sum = 0;

    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = sumArray(arr, n);
    cout << "Sum of array elements = " << result;

    return 0;
}
