#include <iostream>

using namespace std;

int main(){
    int baseSalary =  50000;
    const double bonusPercent = 15.0;

    double bonusAmount;
    double totalSalary;

    bonusAmount = baseSalary * (bonusPercent / 100);
    totalSalary = baseSalary + bonusAmount;

    cout << "totalSalary: " << totalSalary << endl;


}

