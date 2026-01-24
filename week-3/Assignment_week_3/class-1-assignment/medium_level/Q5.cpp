#include <iostream>
using namespace std;

int main() {
    int num;
    long long fact = 1;

    cout << "Enter number: ";
    cin >> num;

    for(int i = 1; i <= num; i++) {
        fact *= i;
    }

    cout << "Factorial = " << fact << endl;

    return 0;
}
