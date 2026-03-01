#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

Node* iterativeInsert(Node* root, int key) {
    Node* newNode = new Node(key);

    if (root == nullptr)
        return newNode;

    Node* parent = nullptr;
    Node* current = root;

    while (current != nullptr) {
        parent = current;

        if (key < current->data)
            current = current->left;
        else if (key > current->data)
            current = current->right;
        else
            return root;
    }

    if (key < parent->data)
        parent->left = newNode;
    else
        parent->right = newNode;

    return root;
}

int main() {
    Node* root = nullptr;

    root = iterativeInsert(root, 50);
    root = iterativeInsert(root, 20);
    root = iterativeInsert(root, 60);

    return 0;
}