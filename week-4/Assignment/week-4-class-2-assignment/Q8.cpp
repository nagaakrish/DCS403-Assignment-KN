#include <iostream>
using namespace std;

void printMatrix(int arr[][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int mat[3][3];

    cout << "Enter matrix:\n";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> mat[i][j];

    printMatrix(mat);

    return 0;
}
