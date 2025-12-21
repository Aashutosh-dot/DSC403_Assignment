
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
    if (key < root->data)
        root->left = insertBST(root->left, key);
    else if (key > root->data)
        root->right = insertBST(root->right, key);
    return root;
}

Node* findMin(Node* root) {
    while (root->left) root = root->left;
    return root;
}

Node* deleteNode(Node* root, int key) {
    if (!root) return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if (!root->left) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (!root->right) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
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
    int n, val, key;

    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter values: ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        root = insertBST(root, val);
    }

    cout << "Enter key to delete: ";
    cin >> key;
    root = deleteNode(root, key);

    cout << "Inorder after deletion: ";
    inorder(root);
    return 0;
}
