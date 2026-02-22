#include <iostream>
using namespace std;

#define SIZE 5

int cq[SIZE];
int front = -1, rear = -1;

bool isEmpty() { return front == -1; }
bool isFull() { return (rear + 1) % SIZE == front; }

int main() {
    cout << "Is circular queue empty? " << (isEmpty() ? "Yes" : "No") << endl;
    rear = SIZE - 1; front = 0;
    cout << "Is circular queue full? " << (isFull() ? "Yes" : "No") << endl;
    return 0;
}