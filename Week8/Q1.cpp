
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

Node* searchBST(Node* root, int key) {
    if (!root || root->data == key) return root;
    if (key < root->data) return searchBST(root->left, key);
    return searchBST(root->right, key);
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

    cout << "Enter key to search: ";
    cin >> key;

    if (searchBST(root, key))
        cout << "Key found";
    else
        cout << "Key not found";

    return 0;
}
