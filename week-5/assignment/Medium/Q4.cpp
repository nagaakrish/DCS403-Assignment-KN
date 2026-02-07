#include <iostream>
using namespace std;

void printArray(int arr[], int index, int size) {
    if (index == size)
        return;
    cout << arr[index] << " ";
    printArray(arr, index + 1, size);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    printArray(arr, 0, n);
    return 0;
}
