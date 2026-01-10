#include <iostream>
using namespace std;

int main(){
    double celcius;
    const double NINE = 9.0;
    const double FIVE = 5.0;
    const double THIRTY_TWO = 32.0;

    cout << "enter temperature in celcius: ";
    cin >> celcius;

    double fahrenheit = (celcius * (NINE / FIVE)) + THIRTY_TWO;

    cout << "temperature in fahrenheit: " << fahrenheit << endl;
}
