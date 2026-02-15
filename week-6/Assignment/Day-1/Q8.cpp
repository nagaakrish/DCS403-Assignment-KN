#include <iostream>
using namespace std;

void someAlgorithm(int n) {
    int x = 0;                          
    for(int i = n; i >= 1; i = i / 2) { 
        for(int j = 10; j >= 1; j--) {  
            x += j;                     
            cout << x << endl;          
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