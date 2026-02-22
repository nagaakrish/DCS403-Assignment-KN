#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    Node* head = NULL;
    Node* temp = NULL;

    for(int i = 0; i < n; i++) {
        Node* newNode = new Node();
        newNode->data = arr[i];
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    cout << "Linked List: ";
    temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}