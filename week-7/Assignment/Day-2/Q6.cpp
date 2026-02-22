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

void deletePosition(Node*& head, int pos) {
    if(head == NULL) return;

    if(pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    for(int i = 1; temp != NULL && i < pos - 1; i++)
        temp = temp->next;

    if(temp == NULL || temp->next == NULL) return;

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

    deletePosition(head, 2);
    print(head);
    return 0;
}