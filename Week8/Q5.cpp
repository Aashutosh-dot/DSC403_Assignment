
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
    while (root && root->left) root = root->left;
    return root;
}

Node* findMax(Node* root) {
    while (root && root->right) root = root->right;
    return root;
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

    cout << "Minimum value: " << findMin(root)->data << endl;
    cout << "Maximum value: " << findMax(root)->data;

    return 0;
}
