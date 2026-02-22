#include <iostream>
using namespace std;

#define SIZE 5

int queueArr[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1) { cout << "Queue Overflow!\n"; return; }
    if (front == -1) front = 0;
    rear++;
    queueArr[rear] = value;
}

void peek() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Front element: " << queueArr[front] << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    peek();
    return 0;
}