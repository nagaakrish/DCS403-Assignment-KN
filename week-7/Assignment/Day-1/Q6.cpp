#include <iostream>
using namespace std;

#define SIZE 5

int queueArr[SIZE];
int front = -1, rear = -1;
bool isEmpty() {
    return (front == -1 || front > rear);
}

bool isFull() {
    return (rear == SIZE - 1);
}

int main() {
    cout << "Linear Queue Full/Empty Check Example\n";

    cout << "Is queue empty? " << (isEmpty() ? "Yes" : "No") << endl;
    cout << "Is queue full? " << (isFull() ? "Yes" : "No") << endl;

    rear = SIZE - 1; 
    front = 0;       
    cout << "\nAfter filling the queue:\n";
    cout << "Is queue empty? " << (isEmpty() ? "Yes" : "No") << endl;
    cout << "Is queue full? " << (isFull() ? "Yes" : "No") << endl;

    return 0;
}