#include <iostream>
using namespace std;
int main(){
    char letter = 'A';
    char next = letter + 1;
    cout <<  next;
}


// case study 4.4

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
    srand (time(0));
    int num = rand() % 26;
    char letter = 'A' + num;
    cout << "random letter: " << letter << endl;

}


//case study 4.7

#include <iostream>
using namespace std;
int main(){
    char hex;
    int decimal;
    cout << "enter a hexadecimal digit (0-9, A-F): ";
    cin >> hex;

    if(hex >= '0' && hex <= '9'){
        decimal = hex - '0';
    }
    else if(hex >= 'A' && hex <= 'F'){
        decimal = hex - 'A' + 10;
    }
    else{
        cout << "invalid input" << endl;
        return 0;
    }
    cout << "decimal: " << decimal << endl;

}