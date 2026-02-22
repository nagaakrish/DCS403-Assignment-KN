#include <iostream>
using namespace std;

#define SIZE 5

int cq[SIZE];
int front = -1, rear = -1;

bool isEmpty() { return front == -1; }

void enqueue(int value) {
    if ((rear + 1) % SIZE == front) { cout << "Queue Overflow!\n"; return; }
    if (isEmpty()) front = rear = 0;
    else rear = (rear + 1) % SIZE;
    cq[rear] = value;
}

void peek() {
    if (isEmpty()) { cout << "Queue is empty\n"; return; }
    cout << "Front element: " << cq[front] << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    peek();
    return 0;
}