#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val, Node* n) {
        data = val;
        next = n;
    }
};

void printList(Node* head){
    cout << "List: ";
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    Node* head = new Node(5, nullptr);
    head->next = new Node(10, nullptr);
    head->next->next = new Node(15, nullptr);
    printList(head);
}