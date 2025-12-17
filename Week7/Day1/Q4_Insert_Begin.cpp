#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertBegin(Node*& head, int val) {
    Node* newNode = new Node{val, head};
    head = newNode;
}

void print(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = nullptr;
    insertBegin(head, 10);
    insertBegin(head, 20);
    print(head);
    return 0;
}