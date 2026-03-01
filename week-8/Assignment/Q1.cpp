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

Node* recursiveSearch(Node* root, int key) {
    if (root == nullptr || root->data == key)
        return root;

    if (key < root->data)
        return recursiveSearch(root->left, key);
    else
        return recursiveSearch(root->right, key);
}

int main() {
    Node* root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(70);

    int key = 30;
    Node* result = recursiveSearch(root, key);

    if (result != nullptr)
        cout << "Key Found\n";
    else
        cout << "Key Not Found\n";

    return 0;
}