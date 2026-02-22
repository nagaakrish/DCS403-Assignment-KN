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

void deleteValue(Node*& head, int x) {
    if(head == NULL) return;

    if(head->data == x) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL && temp->next->data != x)
        temp = temp->next;

    if(temp->next == NULL) return;

    Node* del = temp->next;
    temp->next = del->next;
    delete del;
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

    deleteValue(head, 20);
    print(head);
    return 0;
}