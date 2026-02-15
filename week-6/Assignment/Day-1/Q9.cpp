#include <iostream>
using namespace std;

void someAlgorithm(int n) {
    int x = 0;                          
    for(int i = 0; i < n; i++) {        
        for(int j = 0; j < n; j++) {    
            for(int k = 0; k < n; k++) {
                x++;                    
                cout << x << endl;      
            }
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