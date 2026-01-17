#include <iostream>

using std::cout;
using std::endl;

int main(){

    bool b1 = 0;
    bool b2 = 198;
    bool b3 = 435.98;
    bool b4 = -345.09;

    cout << "b1: " << b1 << endl;
    cout << "b2: " << b2 << endl;
    cout << "b3: " << b3 << endl;
    cout << "b4: " << b4 << endl;

return 0;    
}


//Q.1

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "enter a number: ";
    cin >> num;

    if(num > 10){
        cout << "positive number" << endl;
    }
    else{
        cout << "not a positive number" << endl; 
    }
}



//Q.2
#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    cout << "enter two numbers: ";
    cin >> num1 >> num2;

    if(num1 > num2){
        cout << num1 << " is greater "<< endl;
    
    } else{
        cout << num2 << " is greater "<< endl;

    }
}


//Q.3

#include <iostream>
using namespace std;
int main(){
    int marks;
    cout << "enter your marks: ";
    cin >> marks;

    if(marks >= 80){
        cout << "grade A" << endl;
    }
    else if(marks >= 60){
        cout << "grade B" << endl;
    }
    else if(marks >= 40){
        cout << "grade C" << endl;
    }
    else{
        cout << "grade F" << endl;
    }
}    


//using switch-cases

#include <iostream>
using namespace std;
int main(){
    int marks;
    cout << "enter your marks: ";
    cin >> marks;

    switch(marks / 10){
        case 10:
        case 9:
        case 8:
            cout << "grade A" << endl;
            break;
        case 7:
        case 6:
            cout << "grade B" << endl;
            break;
        case 5:
        case 4:
            cout << "grade C" << endl;
            break;
        default:
            cout << "grade F" << endl;
    }
}

//Q.4
#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "enter a number: ";
    cin >> num;

    if(num > 0){
        if(num % 2 == 0){
            cout << num << " is positive and even" << endl;
        }
        else{
            cout << num << " is positive and odd" << endl;
        }
    }
    else if(num < 0){
        cout << num << " is negative" << endl;
    }
    else{
        cout << "the number is zero" << endl;
    }
}



#include <iostream>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int number = rand()% 10;
    cout << "random number: " << number << endl;
}


//leap year 

#include <iostream>
using namespace std;
int main(){
    int year;
    cout << "enter a year to check a leap year: ";
    cin >> year;

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        cout << year << " is a leap year "<< endl;
    }
    else{
        cout << year << " is not leap year" << endl;
    }
    }


#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    float weight, height, bmi;
    cout << "Enter your weight (kg): ";
    cin >> weight;

    cout << "Enter your height (m): ";
    cin >> height;

    bmi = weight / (height * height);

    cout << fixed << setprecision(2);
    cout << "\nYour BMI is: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Category: Underweight" << endl;
    }
    else if (bmi >= 18.5 && bmi < 25.0) {
        cout << "Category: Normal weight" << endl;
    }
    else if (bmi >= 25.0 && bmi < 30.0) {
        cout << "Category: Overweight" << endl;
    }
    else {
        cout << "Category: Obesity" << endl;
    }

    return 0;
}
