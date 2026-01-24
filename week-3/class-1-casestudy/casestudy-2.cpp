// checking palindrome for numbers
#include <iostream>
using namespace std;

int main(){
    int n, reversedNum = 0, remainder, originalNum;
    cout << "Enter an integer: ";
    cin >> n;
    originalNum = n;
    
    while (n != 0){
        remainder = n % 10;
        reversedNum = reversedNum * 10 + remainder;
        n /= 10;
    }
    if (originalNum == reversedNum)
        cout << originalNum << " is a palindrome." << endl;
    else
        cout << originalNum << " is not a palindrome." << endl;

    return 0;
}