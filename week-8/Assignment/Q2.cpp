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

Node* iterativeSearch(Node* root, int key) {
    while (root != nullptr) {
        if (root->data == key)
            return root;

        if (key < root->data)
            root = root->left;
        else
            root = root->right;
    }
    return nullptr;
}

int main() {
    Node* root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(70);

    int key = 70;
    Node* result = iterativeSearch(root, key);

    if (result)
        cout << "Key Found\n";
    else
        cout << "Key Not Found\n";

    return 0;
}