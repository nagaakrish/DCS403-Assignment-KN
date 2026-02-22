#include <iostream>
using namespace std;

#define SIZE 5

int queueArr[SIZE];
int front = -1;
int rear = -1;

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty\n";
        return;
    }

    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++) {
        cout << queueArr[i] << " ";
    }
    cout << endl;
}

void enqueue(int value) {
    if (rear == SIZE - 1) {
        cout << "Queue Overflow! Cannot insert.\n";
        return;
    }

    if (front == -1) {
        front = 0;
    }

    rear++;
    queueArr[rear] = value;

    cout << value << " inserted successfully.\n";
    display();   
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    return 0;
}