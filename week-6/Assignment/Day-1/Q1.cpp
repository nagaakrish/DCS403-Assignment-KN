#include <iostream>
using namespace std;

void someAlgorithm(int n) {
    int x = 0;                         
    for(int i = n-2; i >= 1; i--) {    
        x += i;                         
        cout << x << endl;            
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    someAlgorithm(n);
    return 0;
}
