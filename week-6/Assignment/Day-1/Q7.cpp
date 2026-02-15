#include <iostream>
using namespace std;

void someAlgorithm(int n) {
    int x;
    cin >> x;                           
    for(int i = 0; i < n; i++) {        
        for(int j = 0; j < i; j++) {    
            cout << i << "," << j << endl; 
        }
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    someAlgorithm(n);
    return 0;
}
