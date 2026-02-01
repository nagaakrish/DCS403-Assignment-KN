//passing an array to a function parameter
#include <iostream>
using namespace std;

// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) 
//         cout << arr[i] << " ";
// }
// int main() {
//     int nums[]= {3, 6, 9};
//     printArray(nums, 3);

// }
void printArray(int arr[3]) {
    for (int i = 0; i < 3; i++) 
        cout << arr[i] << " ";
}
int main() {
    int nums[]= {3, 6, 9};
    printArray(nums);

}