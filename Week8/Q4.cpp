
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int val) {
    Node* temp = new Node();
    temp->data = val;
    temp->left = temp->right = nullptr;
    return temp;
}

Node* insertBST(Node* root, int key) {
    if (!root) return newNode(key);
    Node* curr = root;
    while (true) {
        if (key < curr->data) {
            if (!curr->left) { curr->left = newNode(key); break; }
            curr = curr->left;
        } else if (key > curr->data) {
            if (!curr->right) { curr->right = newNode(key); break; }
            curr = curr->right;
        } else break;
    }
    return root;
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = nullptr;
    int n, val;

    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter values: ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        root = insertBST(root, val);
    }

    cout << "Inorder Traversal: ";
    inorder(root);
    return 0;
}
