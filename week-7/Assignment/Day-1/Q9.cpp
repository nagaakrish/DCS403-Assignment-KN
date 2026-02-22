#include <iostream>
using namespace std;

#define SIZE 5

int cq[SIZE];
int front = -1, rear = -1;

bool isEmpty() { return front == -1; }

void display() {
    if (isEmpty()) { cout << "Queue is empty\n"; return; }
    cout << "Circular Queue: ";
    int i = front;
    while (true) {
        cout << cq[i] << " ";
        if (i == rear) break;
        i = (i + 1) % SIZE;
    }
    cout << endl;
}

void enqueue(int value) {
    if ((rear + 1) % SIZE == front) { cout << "Queue Overflow!\n"; return; }
    if (isEmpty()) front = rear = 0;
    else rear = (rear + 1) % SIZE;
    cq[rear] = value;
}

void dequeue() {
    if (isEmpty()) { cout << "Queue Underflow!\n"; return; }
    cout << cq[front] << " removed\n";
    if (front == rear) front = rear = -1;
    else front = (front + 1) % SIZE;
    display();
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    dequeue();
    return 0;
}