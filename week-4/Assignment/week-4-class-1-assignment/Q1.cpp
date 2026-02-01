#include <iostream>
using namespace std;

int main(){
    int arr[5];

    cout << "enter 5 integers: " << endl;
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }

    cout << "stored integers are: " << endl;
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    return 0;

}