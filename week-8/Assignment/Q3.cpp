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

Node* recursiveInsert(Node* root, int key) {
    if (root == nullptr)
        return new Node(key);

    if (key < root->data)
        root->left = recursiveInsert(root->left, key);
    else if (key > root->data)
        root->right = recursiveInsert(root->right, key);

    return root;
}

void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    Node* root = nullptr;

    root = recursiveInsert(root, 50);
    root = recursiveInsert(root, 30);
    root = recursiveInsert(root, 70);
    root = recursiveInsert(root, 30);

    inorder(root);

    return 0;
}