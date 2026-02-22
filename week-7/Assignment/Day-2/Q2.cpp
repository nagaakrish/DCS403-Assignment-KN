#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void search(Node* head, int x) {
    int position = 1;

    while(head != NULL) {
        if(head->data == x) {
            cout << "Element found at position " << position;
            return;
        }
        head = head->next;
        position++;
    }

    cout << "Element not found";
}

int main() {
   
    Node* n1 = new Node;
    Node* n2 = new Node;
    Node* n3 = new Node;

    n1->data = 10;
    n1->next = n2;

    n2->data = 20;
    n2->next = n3;

    n3->data = 30;
    n3->next = NULL;

    Node* head = n1;

    search(head, 20);

    return 0;
}