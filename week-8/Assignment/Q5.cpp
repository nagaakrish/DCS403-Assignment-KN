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

Node* recursiveMin(Node* root) {
    if (root == nullptr || root->left == nullptr)
        return root;

    return recursiveMin(root->left);
}

Node* iterativeMax(Node* root) {
    while (root->right != nullptr)
        root = root->right;

    return root;
}

int main() {
    Node* root = new Node(50);
    root->left = new Node(20);
    root->right = new Node(80);

    cout << "Minimum: " << recursiveMin(root)->data << endl;
    cout << "Maximum: " << iterativeMax(root)->data << endl;

    return 0;
}