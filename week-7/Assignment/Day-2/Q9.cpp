#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = NULL;
    }
};

void insertAfter(Node* head, int x, int y) {
    while(head != NULL && head->data != x)
        head = head->next;

    if(head == NULL) return;

    Node* newNode = new Node(y);
    newNode->next = head->next;
    head->next = newNode;
}

void print(Node* head) {
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    insertAfter(head, 20, 25);
    print(head);
    return 0;
}