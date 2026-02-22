#include <iostream>
#define SIZE 5
using namespace std;

class CircularQueue {
private:
    int items[SIZE];
    int front, rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }
    void displayStatus() {
        cout << "Front: " << front << ", Rear: " << rear << endl;
    }
};

int main() {
    CircularQueue q;
    cout << "Circular Queue Created." << endl;
    q.displayStatus();
    return 0;
}