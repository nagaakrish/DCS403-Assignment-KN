//passing by valur
// #include <iostream>
// using namespace std;

// void increment(int num) {
//     num++; 
//     cout << "Inside function: " << num << endl;
// }

// int main() {
//     int x = 5;

//     increment(x); 
//     cout << "outside function: " << x << endl;

//     return 0;
// }



//pass by reference

// #include <iostream>
// using namespace std;

// void increment(int&num) {
//     num++; 
//     cout << "Inside function: " << num << endl;
// }

// int main() {
//     int x = 5;

//     increment(x); 
//     cout << "outside function: " << x << endl;

//     return 0;
// }


//overloading function
// #include <iostream>
// using namespace std;

// int add(int a, int b) {
//     return a + b;
// }
// double add(double a, double b) {
//     return a + b;
// }
// int main(){
//     cout << add(2, 3) << endl;
//     cout << add(2.5, 4.2) << endl;
//     return 0;
// }


//Default argument
// #include <iostream>
// using namespace std;

// double interest (double amount, double rate = 0.05){
//     return amount * rate;
// }

// int main(){
//     cout << interest(1000) << endl;
//     cout << interest(1000, 0.1) << endl;
//     return 0;
// }



//inline function
// #include <iostream>
// using namespace std;
// inline int cube(int x){
//     return x * x * x;
// }
// int main(){
//     cout << cube(3) << endl;
//     return 0;
// }

//local, global static variable
#include <iostream>
using namespace std;

int globalCount = 0;
void showCounter(){
    int localCount = 0;
    static int count = 0;
    localCount++;
    count++;
    globalCount++;

    cout << "localCount: " << localCount << ", count: " << count << ", globalCount: " << globalCount << endl;

}

int main(){
    showCounter();
    showCounter();
    return 0;
}




