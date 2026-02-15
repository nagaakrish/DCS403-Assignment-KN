#include <iostream>
using namespace std;

void someAlgorithm(int n) {
    int x;
    cin >> x;                          
    for(int i = 1; i <= n; i = i + 5) {
        if(i < n) {                    
            cout << i << endl;         
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
